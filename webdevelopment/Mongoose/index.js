// getting-started.js
const mongoose = require('mongoose');
mongoose.connect('mongodb://localhost/saurabhkart', {useNewUrlParser: true});


var db = mongoose.connection;
db.on('error',console.error.bind(console,'connection error:'));
db.once('open',function(){
    console.log("we are connected");
    
});


var kittySchema = new mongoose.Schema({
    name: String
});

kittySchema.methods.speak= function(){
    var greeting = "my name is "+ this.name  //  function defination
    console.log(greeting)
}


var  kitten = mongoose.model('harrykitty',kittySchema);


//inserted one in collection harrykitties
var harrykitty = new kitten({name:'Goody'});
console.log(harrykitty.name);
harrykitty.speak();
//inserted anotherone in collection harrykitties
var harrykitty2 = new kitten({name:'Poppya'});


harrykitty.save(function(err,harrykitty){
    if(err)return console.error(err);
    harrykitty.speak();
})


harrykitty2.save(function(err,k){
    if(err)return console.error(err);
    k.speak();
})

