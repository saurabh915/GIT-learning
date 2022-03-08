const express =  require("express");
const app =express();
const port = process.env.PORT ||3000;//if you do not include any port number then it will automatically assign any port number

app.use(express.json())//now our user veriable can access req.body method in json and can use it

//to add all external folder 
require("./db/conn");
const Student = require("./modals/students")

app.get("/",(req,res)=>{
    res.send("hello, champion");
});


//create new students
// app.post("/students",(req, res)=>{
//     console.log(req.body);
//     const user = new Student(req.body);//now data of studunt schema is stored in user in json format as we used app.use(express.json())  
//     //above code is getting json data in user variable
//     user.save().then(()=>{
//         res.status(201).send(user);
//     }).catch((e)=>{
//         res.status(400).send("item not saved to database"+ e);
//     })
    
//     // res.send("hello form the other side");
// });

//we can use any one above or below
app.post("/students",async(req,res)=>{
    try {
        const user = new Student(req.body);
        const createuser = await user.save();
        res.status(201).send(createuser);
        
    } catch (error) {
        res.status(400).send("item not saved to database"+ error);
        
    }
   
})


app.listen(port,()=>{
    console.log("your connection is estabilished")
});
