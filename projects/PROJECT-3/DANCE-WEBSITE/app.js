const express = require("express");
const path = require("path");
const fs = require("fs");
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

    res.status(200).render("home");
});
app.get('/contact', (req ,res)=>{

    res.status(200).render("contact");
});

//collecting from user
app.post('/contact',(req,res)=>{
    name = req.body.name      //second name is taken from name tag from form  
    // age = req.body.age
    // gender= req.body.gender
    address = req.body.address
    // more = req.body.more
    let outputwrite =`name of the client is ${name},residing at ${address}.`
fs.writeFileSync('output2.txt',outputwrite)

    const parms ={"message":"your form has been submitted successfully"};
    res.status(200).render("home",parms);
})



//LISTENING TO SERVER

app.listen(port,()=>{
    console.log(`log application started sucessfuly on port ${port}`);
});
