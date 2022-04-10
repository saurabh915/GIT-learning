import React, { useState } from "react";

export default function TextForm(props) {
  let i = 0;
  //below is hook
  const [text, setText] = useState("enter the text here"); //here text is variable which can be used to set value in any heading or paragraph or divison and then we can change it with setText it can not changed by setText....
  // text = "enter the text";
  const handleUpClick = () => {
    console.log("uppercase button is clicked");

    if (i === 0) {
      i = 1;
      let newText;
      let buttn = document.getElementById("change");
      buttn.innerHTML = "CONVERT TO LOWERCASE";
      newText = text.toUpperCase();
      setText(newText);
    } else {
      i = 0;
      let newText2;
      let buttn2 = document.getElementById("change");
      newText2 = text.toLowerCase();
      console.log("lowercase button is clicked");
      buttn2.innerHTML = "CONVERT TO UPPERCASE";

      setText(newText2);
    }
  };
  const handleOnChange = (event) => {
    //event takes the value of text + the new changed value in event object
    console.log("uppercase button is clicked");

    setText(event.target.value); //here that event object is pasted into value and that value is set into text variable which can be changed by setText..
  };
  // setText("enter t");

  // const  handleSizeClick =()=>{

  //   let fontsize =document.getElementbyId('exampleFormControlTextarea1');
  //   fontsize.style.font-size == {i} ;
  // }
  return (
    <>
      <div  className="container"
          style={{  backgroundColor: props.mode === "light" ? "grey" : "white",
            color: props.mode === "light" ? "white" : "grey" }}>
        {
          <h1>
            {props.heading}
          </h1> /* this heading is used in app to access heading */
        }
        <div
          className="mb-3"
          style={{
            backgroundColor: props.mode === "light" ? "grey" : "white",
            color: props.mode === "light" ? "white" : "grey",
          }}        >
          <label htmlFor="exampleFormControlTextarea1" className="form-label">
            Example textarea
          </label>
          <textarea
            className="form-control"
            value={text}
            onChange={handleOnChange}
            style={{
              backgroundColor: props.mode === "light" ? "grey" : "white",
              color: props.mode === "light" ? "white" : "grey",
            }}
            id="exampleFormControlTextarea1"
            rows="8"
          ></textarea>
        </div>
        <button className="btn btn-primary" id="change" onClick={handleUpClick}>
          CONVERT TO UPPERCASE
        </button>
        {/* <button className='btn btn-primary'id='change' onClick={handleSizeClick}>INCREASE FONT SIZE</button> */}
      </div>
      <div className="container">
        <h1>your text summary</h1>
        <p>
          {text.split(" ").length} words and {text.length} characters
        </p>
        <p>{text}</p>
      </div>
    </>
  );
}
