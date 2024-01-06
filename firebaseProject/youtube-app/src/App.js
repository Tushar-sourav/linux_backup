import { getDatabase,ref, set } from "firebase/database"
import {app} from "./firebase"
import React from 'react'


const db= getDatabase(app); 

const App = () => {

  const putData = () =>{
    set(ref(db,"users/tushar"),{
      id:1,
      name:"tushar",
      age:21
    });
  }

  return (
    <div className='App'>
      <h1>Firebase Project.</h1>
      <button onClick={putData}>Put Data</button>
    </div>
  )
}

export default App

