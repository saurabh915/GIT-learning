const express = require("express");
let port =80;
const path= require('path');
const app =express();
//for serveying static files
app.use("/static",express.static('static'));
//set the tempplate engine as pug
app.set('view engine','pug');
//set the views directory
app.set('views',path.join(__dirname,'views'));
//our pug demo "end" point--->end point is point wherewe can joint tamplet.
app.get("/demo",(req,res)=>{
    res.status(200).render('demo',{title:'hey harry', message:'thanks for teaching us how to use  pug'})
});
app.get('/', (req ,res)=>{
    res.status(200).send("this is my first express app but i dont know how  is  an app")
});

app.listen(port,()=>{
    console.log(`log application started sucessfuly on port ${port}`);
});
app.get('/home',(req, res)=>{
    res.send("this is another  request2");
});
