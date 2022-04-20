const http = require("http");

const hostname = "127.0.0.1";
<<<<<<< HEAD
const port = 3000;
=======
const port = 80;
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87

const server = http.createServer((req, res) => {
  res.statusCode = 200;
  res.setHeader("Content-Type", "text/HTML");
  // res.end('Hello World');
  res.end(`<!DOCTYPE html>
  <html lang="en">
  
  <head>
      <meta charset="UTF-8">
      <meta http-equiv="X-UA-Compatible" content="IE=edge">
      <meta name="viewport" content="width=device-width, initial-scale=1.0">
      <title>website
      </title>
<<<<<<< HEAD
      <link rel="stylesheet" href="CSS/style.css">
=======
      <link rel="stylesheet" href="../../projects/PROJECT-2/static/CSS/style.css">
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87
      <link rel="stylesheet"  media="screen and (max-width:2000px)" href="CSS/phone.css">
      <link rel="preconnect" href="https://fonts.googleapis.com">
      <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
      <link href="https://fonts.googleapis.com/css2?family=Allison&display=swap" rel="stylesheet">
      <link rel="preconnect" href="https://fonts.googleapis.com">
      <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
      <link href="https://fonts.googleapis.com/css2?family=Baloo+Bhaina+2:wght@600&display=swap" rel="stylesheet">
      <link rel="preconnect" href="https://fonts.googleapis.com">
      <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
      <link href="https://fonts.googleapis.com/css2?family=Satisfy&display=swap" rel="stylesheet">
  </head>
  
  <body>
      <nav id="navbar">
          <div id="logo">
              <img src="modak.png" alt="food for foodies.com">
          </div>
          <ul>
              <li class="item"><a href="#home">Home</a></li>
              <li class="item"><a href="#services-container">Services</a></li>
              <li class="item"><a href="#client-section">our clients</a></li>
              <li class="item"><a href="#contact">contact us</a></li>
  
          </ul>
      </nav>
      <section id="home">
          <h1 class="h-primary">welcome to food for foodies</h1>
          <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Facilis maxime qui quos illo veniam veritatis
              voluptatum nobis.</p>
          <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Facilis maxime qui quos
              .</p>
          <button class="btn">Order Now</button>
      </section>
      <section id="services-container">
          <h1 class="h-primary center">our services</h1>
          <div id="services">
              <div class="box">
                  <img src="delivery boy.png" />
                  <h2 class="h-secondary center">food ordering
                  </h2>
                  <p class="center">Lorem ipsum dolor sit amet consectetur adipisicing elit. Quaerat itaque dolorem rem
                      laborum illo est
                      dolor iusto quasi eos ratione nulla, nihil vel exercitationem reiciendis fugit corrupti eius ullam
                      possimus perferendis reprehenderit modi officia!</p>
              </div>
              <div class="box">
                  <img src="pizza.png" alt="pizza">
                  <h2 class="h-secondary center">food caterining
                  </h2>
                  <p class="center">Lorem ipsum dolor sit amet consectetur adipisicing elit. Quaerat itaque dolorem rem
                      laborum illo est
                      dolor iusto quasi eos ratione nulla, nihil vel exercitationem reiciendis fugit corrupti eius ullam
                      possimus perferendis reprehenderit modi officia!</p>
              </div>
              <div class="box">
                  <img src="bahubali thali2.png" alt="pizza" />
                  <h2 class="h-secondary center">bulk ordering
                  </h2>
                  <p class="center">Lorem ipsum dolor sit amet consectetur adipisicing elit. Quaerat itaque dolorem rem
                      laborum illo est
                      dolor iusto quasi eos ratione nulla, nihil vel exercitationem reiciendis fugit corrupti eius ullam
                      possimus perferendis reprehenderit modi officia!</p>
              </div>
          </div>
      </section>
      <section id="client-section">
          <h1 class="h-primary center"> our clients</h1>
          <div id="clients">
              <div class="client-item">
                  <img src="apple logo.png" alt="our clients">
              </div>
              <div class="client-item">
                  <img src="microsoft logo.png" alt="our clients">
              </div>
              <div class="client-item">
                  <img src="skype logo.png" alt="our clients">
              </div>
              <div class="client-item">
                  <img src="hp logo.png" alt="our clients">
              </div>
              <div class="client-item">
                  <img src="tata logo.png" alt="our clients">
              </div>
          </div>
  
  
      </section>
      <hr>
      <section id="contact">
          
          <h1 class="h-primary center">contact us</h1>
          <div id="contact-box">
              <form action="">
                  <div class="form-group">
                      <label for="name">Name:</label>
                      <input type="text" name="name" id="name" placeholder="enter your name">
                  </div>
                  <div class="form-group">
                      <label for="email">Email:</label>
                      <input type="email" name="name" id="email" placeholder="enter your email">
                  </div>
                  <div class="form-group">
                      <label for="number">contact no.:</label>
                      <input type="number" name="number" id="phone" placeholder="enter your contact number">
                  </div>
                  <div class="form-group">
                      <label for="name">Comment:</label>
                      <textarea name="message" id="message" cols="30" rows="3"></textarea>
                  </div>
              </form>
          </div>
      </section>
      <footer>
          <div class="center">
              copyright &copy; www.foodforfoodies.com. All rights reserved!
          </div>
      </footer>
  </body>
  
  </html>`);
});

server.listen(80, "127.0.0.1", () => {
  console.log(`Server running at http://${hostname}:${port}/`);
});
