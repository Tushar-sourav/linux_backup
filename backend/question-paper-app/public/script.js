document.addEventListener("DOMContentLoaded", () => {
  const uploadForm = document.getElementById("uploadForm");
  const questionPapersList = document.getElementById("questionPapersList");

  // Define the base URL for your backend (assuming it's running on port 3000)
  const backendBaseUrl = 'http://localhost:3000';

  // Function to fetch and display question papers
  const displayQuestionPapers = async () => {
    try {
      const response = await fetch(`${backendBaseUrl}/api/questionpapers`);
      if (!response.ok) {
        throw new Error("Network response was not ok");
      }
      const questionPapers = await response.json();

      // Clear the existing list
      questionPapersList.innerHTML = "";

      // Display question papers
      
      questionPapers.forEach((paper) => {
  const listItem = document.createElement("li");
  listItem.innerHTML = `<a href="${backendBaseUrl}/api/questionpapers/${paper.filename}/download">${paper.category} (${paper.year})</a>`;
  questionPapersList.appendChild(listItem);
});

    } catch (error) {
      console.error("Error fetching question papers:", error);
    }
  };

  // Event listener for form submission
  uploadForm.addEventListener("submit", async (event) => {
    event.preventDefault();

    const formData = new FormData(uploadForm);
    try {
      const response = await fetch(`${backendBaseUrl}/api/questionpapers/upload`, {
        method: "POST",
        body: formData,
      });
      if (!response.ok) {
        throw new Error("Upload failed");
      }
      // Refresh the list of question papers after successful upload
      displayQuestionPapers();
    } catch (error) {
      console.error("Error uploading question paper:", error);
    }
  });

  // Initial call to display question papers
  displayQuestionPapers();
});
