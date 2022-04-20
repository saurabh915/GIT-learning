

//npm init for creating package.json
// npm init ~y for creating package.json automatically
const express =  require("express");
const { send } = require("express/lib/response");
const res = require("express/lib/response");
const studentrouter = require("./routers/student");//connecting different folders
const app =express();
const port = process.env.PORT ||3000;//if you do not include any port number then it will automatically assign any port number

app.use(express.json())//now our user veriable can access req.body method in json and can use it
app.use(studentrouter);//registering router
//to add all external folder 
require("./db/conn");
// const Student = require("./modals/students")





app.get("/",(req,res)=>{
    res.send("hello, champion");
});





// //creating new router

// const router = new express.Router();

// //Defining router
// router.get("/patil",(req,res)=>{
//          res.send("hello, whatsup guys")
// });
// //register router

// app.use(router);














app.listen(port,()=>{
    console.log("your connection is estabilished")
});
