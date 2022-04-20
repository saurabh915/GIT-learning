const http = require('http')
const fs = require('fs')
<<<<<<< HEAD
const filecontent = fs.readFileSync('stringfunctions.html');
=======
const filecontent = fs.readFileSync('stingfunctions.html');
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87

const server = http.createServer((req,res)=>{
    res.writeHead(200,{'Content-type':'text/html'});
    res.end(filecontent)
})

server.listen(80,'127.0.0.1',()=>{
    console.log("listening on port 80")
})