const mongoose = require("mongoose");
const validator  =require("validator");
const studentSchema = new mongoose.Schema({
    name:{                 //this name word is  to find perticular person name 
        type:String,
        required: true,
        minlength: 3
    },
    email:{
        type:String,
        required:true,
        unique:[true,"email id already registerd"],
        validate(value){
            if (!validator.isEmail(value)) {
                throw new Error("invalid email")
            }
        }
    },
    phone:{
        type:Number,
        min:10,
        required:true,// this section is mandetory to fill
        unique:true//it should be unique
    },
    address:{
        type:String,
        required:true
    }
});



// we will create new collection
const Student = new mongoose.model('Student',studentSchema);//here new collection of database is created and the rules are in the new database name (Student )first letter should be capital

module.exports = Student;