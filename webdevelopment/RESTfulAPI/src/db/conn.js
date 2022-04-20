const mongoose = require("mongoose");
mongoose.connect("mongodb://localhost:27017/students-api",{
    // useCreateIndex:true,//to not give errors while connecting mongodb
    useNewUrlparser:true,
    useUnifiedTopology:true,
    // useFindAndModify:false 
}).then(()=>{
    console.log("mongoose connection is successful");
}).catch((e)=>{
    console.log("mongoose connection error");
});