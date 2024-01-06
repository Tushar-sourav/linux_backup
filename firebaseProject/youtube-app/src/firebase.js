import { initializeApp } from "firebase/app";

const firebaseConfig = {
    apiKey: "AIzaSyAOCWeG1WnS1F936VaEC8GejgDFcPaEvDI",
    authDomain: "app-725d8.firebaseapp.com",
    projectId: "app-725d8",
    storageBucket: "app-725d8.appspot.com",
    messagingSenderId: "979073707213",
    appId: "1:979073707213:web:bc0302003f08e66bbacd84",
    databaseURL: "https://app-725d8-default-rtdb.firebaseio.com"
  };

  export const app= initializeApp(firebaseConfig);