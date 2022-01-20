const express = require("express");
let port =80;
const path= require('path');
const app =express();
//for serveying static files
app.use("/costomstatic",express.static('costomstatic'));
//set the tempplate engine as pug
app.set('view engine','pug');
//set the views directory
app.set('views',path.join(__dirname,'costomviews'));
//our pug demo "end" point--->end point is point wherewe can joint tamplet.
app.get("/costomdemo",(req,res)=>{
    res.status(200).render("costomdemo",{title:'hey harry', message:' teaching us how to use  pug'})
});
app.get('/', (req ,res)=>{
    res.status(200).send(`index.html`)
});

app.listen(port,()=>{
    console.log(`log application started sucessfuly on port ${port}`);
});
app.get('/home',(req, res)=>{
    res.send("this is another request");
});
