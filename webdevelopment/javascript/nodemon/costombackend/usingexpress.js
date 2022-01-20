
const fs= require("fs");
const express = require("express");
const path= require('path');
const app =express();
let port =80;
// EXPRESS STUFF
app.use("/costomstatic",express.static('costomstatic'));//for serveying static files
app.use(express.urlencoded());
// PUG STUFF
app.set('costomviews',path.join(__dirname,'costomviews'));//set the views directory
app.set('view engine','pug');//set the tempplate engine as pug



// END POINTS
//our pug demo "end" point--->end point is point wherewe can joint tamplet.
app.get("/demo",(req,res)=>{
    res.status(200).render("costomdemo",{title:'hey harry', message:'thanks for teaching us how to use  pug'})
});


// app.get('/', (req ,res)=>{
//     res.status(200).send(`index.html`)
// });


app.get('/', (req ,res)=>{
    const con ="this is best thing";
    const parms ={"title":"pubg is best game to waste time","content":con}
    res.status(200).render("index",parms);
});



app.get('/home',(req, res)=>{
    res.send("this is another request");
});



app.post('/',(req,res)=>{
    name = req.body.name
    age = req.body.age
    gender= req.body.gender
    address = req.body.address
    more = req.body.more
    let outputwrite =`name of the client is ${name}, ${age} years old,${gender},residing at ${address}.More about him/her: ${more} `
fs.writeFileSync('output2.txt',outputwrite)

    const parms ={"message":"your form has been submitted successfully"};
    res.status(200).render("index",parms);
})

app.listen(port,()=>{
    console.log(`log application started sucessfuly on port ${port}`);
});

