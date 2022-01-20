const http = require("http");
const fs = require("fs");
const filecontent = fs.readFileSync("./math.html");
const home = fs.readFileSync("./index.html");
const contact = fs.readFileSync("./contact.html");
const services = fs.readFileSync("./services.html");
const about = fs.readFileSync("./about.html");
const port = 3000;
const hostname = "127.0.0.1";

const server = http.createServer((req, res) => {
  console.log(req.url);
  let url = req.url;
  res.statuscCode = 200;
  res.writeHead(200, { "Content-type": "text/html" });

  if (url == "/home") {
    res.end(home);
  }
   else if (url == "/about") {
    res.end(about);
  } else if (url == "/contact") {
    res.end(contact);
  } else if (url == "/services") {
    res.end(services);
  } else {
    res.statusCode = 404;
    res.end("<h1> error 404 not found</h1>");
  }
});

server.listen(port, hostname, () => {
  console.log("listening on port 80");
});
console.log(`Server running at : http://${hostname}:${port}/home`);
