const express = require("express");
const path = require("path");

const app = express();
const port = 8000;

// EXPRESS STUFF
app.use("/static",express.static('static'));//for serveying static files
app.use(express.urlencoded());
// PUG STUFF
app.set('views',path.join(__dirname,'views'));//set the views directory
app.set('view engine','pug');//set the tempplate engine as pug


// END POINTS
app.get('/', (req ,res)=>{

    res.status(200).render("index");
});




//LISTENING TO SERVER

app.listen(port,()=>{
    console.log(`log application started sucessfuly on port ${port}`);
});
