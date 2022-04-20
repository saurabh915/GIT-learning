const express = require("express");

//creating new router

const router = new express.Router();

//for connecting with student models
const Student = require("../modals/students");


//create new students
// app.post("/students",(req, res)=>{
//     console.log(req.body);
//     const user = new Student(req.body);        //now data of studunt schema is stored in user in json format as we used app.use(express.json())  
//                                           //above code is getting json data in user variable
//     user.save().then(()=>{
//         res.status(201).send(user);
//     }).catch((e)=>{
//         res.status(400).send("item not saved to database"+ e);
//     })
    
//     // res.send("hello form the other side");
// });

//we can use any one above or below
// first line before using router was...
//app.post("/students",async(req,res)=>{
// then after using router...

router.post("/students",async(req,res)=>{
    try {
        const user = new Student(req.body);//this will request user to enter the data which will be saved to database
        const createuser = await user.save();
        res.status(201).send(createuser);
        
    } catch (error) {
        res.status(400).send("item not saved to database"+ error);
        
    }
   
});



//read the data of registered student
router.get("/students",async(req,res)=>{
    try {
        const studentsData =await Student.find();  //if you want to get data in ascending oreder with ranking then use const studentsData =await Student.find({}).sort({"ranking":1});
        res.send(studentsData);            //using this block of code we will get whole student data
    } catch (error) {
        res.send(error);
    }
});


//for gating indivisual student data using id name or from phone no 
router.get("/students/:id",async(req,res)=>{//here id defines that we are accessing perticular id if we put perticular id in chrome search along with students/ we will get that element only.
    try {
       const _id = req.params.id;
      const studentdata = await Student.findById(_id);
      if (!studentdata) {
          return res.status(404).send();
      } else {
          res.send(studentdata);
      }
      
      res.send(req.params.id);//       this statement will send collections information according to id      
    } catch (error) {
        res.send(error);
    }
})



// //getting data by name
// router.get("/students/:name",async(req,res)=>{
//     try {
//         const _name = req.params.name;
//         console.log(_name);
//         const studentsData =await Student.findByName(name:_name);
//         res.send(studentsData);            //using this block of code we will get whole student data
//     } catch (error) {
//         console.log(_name);
//         console.log("there is an error");
//                 res.send(error);
//     }
// });


//delete data from server
router.delete("/students/:id",async(req,res)=>
{
    try {
        const deleteStudent = await Student.findByIdAndDelete(req.params.id)
   if (!req.prarms.id) {
       return res.status(400).send();
   } 
   else{
       res.send(deleteStudent);
   }
   
   
    } catch (error) {
        res.status(500).send(error);
    }
})
//update the students by id
router.patch("/students/:id",async(req,res)=>{
  try {
      const _id =req.params.id;
      const updatestudents= await Student.findByIdAndUpdate(_id,req.body,{new:true});//this req.body will give you updated atributes
  res.send(updatestudents)                                                      //new true will give you latest changed data
    } catch (error) {
      res.status(404).send(error);
  }  
});

module.exports = router;