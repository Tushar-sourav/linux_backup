const express = require('express');
const mongoose = require('mongoose');
const multer = require('multer');
const path = require('path');
const fs = require('fs');
const app = express();
const port = process.env.PORT || 3000;
const cors = require('cors'); // Import the CORS middleware

// Enable CORS for all routes
app.use(cors());

// Set up MongoDB connection (if you plan to use MongoDB)
mongoose.connect('mongodb://localhost/question_papers_db', {
  useNewUrlParser: true,
  useUnifiedTopology: true,
});

// Set up file upload using Multer
const storage = multer.diskStorage({
  destination: (req, file, cb) => {
    cb(null, 'uploads'); // Create an 'uploads' directory
  },
  filename: (req, file, cb) => {
    cb(null, Date.now() + '-' + file.originalname);
  },
});

const upload = multer({ storage: storage });

// JSON database file path
const jsonDBFile = path.join(__dirname, 'uploads', 'question_papers.json');

// Middleware to handle errors
app.use((err, req, res, next) => {
  console.error(err.stack);
  res.status(500).send('Something went wrong!');
});

// Route to upload a question paper and add it to the JSON database
app.post('/api/questionpapers/upload', upload.single('pdf'), async (req, res) => {
  try {
    // Retrieve form data (category, year) from req.body
    const { category, year } = req.body;

    // Generate a unique ID
    const id = Date.now().toString();

    // Construct a new question paper object
    const newPaper = {
      id,
      category,
      year,
      filename: req.file.filename,
    };

    // Read the existing JSON data from the database file
    const jsonData = fs.readFileSync(jsonDBFile, 'utf8');
    const questionPapers = JSON.parse(jsonData);

    // Add the new question paper to the array
    questionPapers.push(newPaper);

    // Write the updated data back to the JSON file
    fs.writeFileSync(jsonDBFile, JSON.stringify(questionPapers, null, 2));

    res.status(200).send('File uploaded successfully');
  } catch (error) {
    console.error('Error uploading question paper:', error);
    next(error); // Pass the error to the error handling middleware
  }
});

// Route to retrieve a list of available question papers from the JSON database
app.get('/api/questionpapers', (req, res) => {
  try {
    // Read the existing JSON data from the database file
    const jsonData = fs.readFileSync(jsonDBFile, 'utf8');
    const questionPapers = JSON.parse(jsonData);
    res.json(questionPapers);
  } catch (error) {
    console.error('Error fetching question papers:', error);
    next(error); // Pass the error to the error handling middleware
  }
});

// Route for downloading files
app.get('/api/questionpapers/:filename/download', (req, res) => {
  const filename = req.params.filename;
  const filePath = path.join(__dirname, 'uploads', filename); // Construct the file path

  // Send the file for download
  res.download(filePath, (err) => {
    if (err) {
      // Handle download error, e.g., file not found
      console.error('Error downloading file:', err);
      res.status(404).send('File not found');
    }
  });
});

// ... (Other route definitions for your API)

// Start the server
app.listen(port, () => {
  console.log(`Server is running on port ${port}`);
});
