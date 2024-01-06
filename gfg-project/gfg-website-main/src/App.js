// import {Button} from "@chakra-ui/react";
import {BrowserRouter as Routers,Routes,Route} from "react-router-dom";



function App() {
  return (
    <Routers>
      <Header />
      <Routes>
        <Route path="/" element={<Home />} />
      </Routes>
      <Footer/>
    </Routers>
  );
}

export default App;
