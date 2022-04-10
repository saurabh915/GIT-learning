// import logo from './logo.svg';
import './App.css';
import Navbar from './components/Navbar';
import TextForm from './components/TextForm';
import About from './components/About';
import Alert from './components/Alert';
import React,{ useState } from 'react';

function App() {

  const [mode,setmode]=useState("light");
  const [alert,setAlert]= useState(null,null);
  const togglemode= ()=>{
    if(mode === 'dark')
    {
      setmode ("light");
     document.body.style.backgroundColor ="light";
     showAlert("light mode is enabled","success");//calling show alert;
    }
    else{
      setmode("dark") ;
      document.body.style.backgroundColor ="dark";
showAlert("dark mode is enabled","success");
    }
  }
 
  const showAlert = (message,type)=>{
           setAlert({msg:message,
                     type:type});
  };
  return (
  <>
  
{ <Navbar title="TextUtils" aboutTextUtils = "about us" mode = {mode} togglemode ={togglemode} />  }
<Alert  alert= {alert}/>
 {/* here if we do not include title and aboutTextUtils then default props will be included  */}
 <div className="container"  mode = {mode}><TextForm heading = "Enter the text to analyse" mode = {mode} /> </div>
 <About mode = {mode} />
 

 </>
  );
}

export default App;
