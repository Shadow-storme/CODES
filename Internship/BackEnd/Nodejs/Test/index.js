// var http = require('http');
// var fs = require("fs");

// http.createServer(function (req, res) {
//   fs.readFile('test.html', function (err, data) {
//     res.writeHead(200, { 'Content-Type': 'text/html' });
//     res.end(data);
//     res.write(data);
//     return res.end();
//   })
// }).listen(5000);

// let http = require('http');
// let fs = require('fs');
// let url = require('url');

// let addr = 'http://localhost:5000/default.html?name=singh';
// let result= url.parse(addr, true);
// console.log(result.search);
// console.log(result.host);
// console.log(result.pathname);
// console.log(result.query);

// let http = require('http');
// let fs = require('fs');
// let url = require('url');

// http.createServer(function (req, res) {
//   var inUrl= url.parse(req.url, true);
//   var filename = "." + inUrl.pathname;
//   fs.readFile(filename, function (err, data) {
//     if (err) {
//       res.writeHead(404, { 'Content-Type': 'text/html' });
//       return res.end("404 Not Found");
//     }
//     res.writeHead(200, { 'Content-Type': 'text/html' });
//     res.write(data);
//     return res.end();
//   });
// }).listen(5000);

// const url = require('url');

// const urlString = 'http://localhost:5000/default.html?id=009&name=Singh';

// // Parse the URL
// const parsedUrl = url.parse(urlString, true);

// // Retrieve the student's id and name from the query string
// const studentId = parsedUrl.query.id;
// const studentName = parsedUrl.query.name;

// console.log(`Student ID: ${studentId}`);
// console.log(`Student Name: ${studentName}`);

// var express = require('express');
// var app = express();

// app.get('/test', function (req, res) {
//   res.send('Hello World');
// });

// app.listen(5000, () => { console.log("Server running on port 5000"); });

// var express = require('express');
// var app = express();

// app.get('/test/:data', function (req, res) {
//   res.send(req.params);
// });

// app.listen(5000, () => { console.log("Server running on port 5000"); });


// var express = require('express');
// var app = express();

// const storage = require('node-persist');
// var bodyParser = require('body-parser');

// var jsonParser = bodyParser.json();
// storage.init();

// app.post('/student',jsonParser, async(req, res) => {
//   const{student_id, student_name} = req.body;
//   await storage.setItem(student_id, student_name);
//   res.send("Student added successfully");
// });

// app.listen(5000, () => { console.log("Server running on port 5000"); });

// var express = require('express');
// var app = express();

// const storage = require('node-persist');
// var bodyParser = require('body-parser');

// var jsonParser = bodyParser.json();
// storage.init();

// app.get('/student/:id', async (req, res) => {
//   if((await storage.keys()).includes(req.params.id)){
//   res.send(await storage.getItem(req.params.id));}
//   else{
//     res.send("Student not found");
//   }

// });

// app.post('/student', jsonParser, async (req, res) => {
//   const { student_id, student_name } = req.body;
//   await storage.setItem(student_id, student_name);
//   res.send("Student added successfully");
// });

// app.listen(5000, () => { console.log("Server running on port 5000"); });

//create a POST request that accepts the following details: student ID (should be unique), Student name,GPA. Use postman to make these requests and populate the storage.

// var express = require('express');
// var app = express();
// const storage = require('node-persist');
// var bodyParser = require('body-parser');
// var jsonParser = bodyParser.json();
// storage.init();

// app.post('/student', jsonParser, async (req, res) => {
//   const {student_id,student_name,GPA} = req.body;
//   if ((await storage.keys()).includes(student_id)) {
//     res.send("Student ID already exists");
//   }
//   else {
//     await storage.setItem(student_id,student_name,GPA);
//     res.send("Student added successfully");
//   }
// }
// );

// app.listen(5000, () => { console.log("Server running on port 5000"); });

//Postman code

//POST http://localhost:5000/student
//Content-Type: application/json

// {
//     "student_id": "001",
//     "student_name": "Singh",
//     "GPA": "3.5"
// }


// //then create an endpoint that retrieves all the data and print them.Make this request from the browser.

var express = require('express');
var app = express();

const storage = require('node-persist');

var bodyParser = require('body-parser');

var jsonParser = bodyParser.json();
storage.init();

app.get('/student', async (req, res) => {
  let data = await storage.values();
  res.send(data);
}
);

app.listen(5000, () => { console.log("Server running on port 5000"); });


// //then, create another GET request that retrieves the data of a particular student , and print it.Make this request from the browser.

// var express = require('express');
// var app = express();

// const storage = require('node-persist');

// var bodyParser = require('body-parser');

// var jsonParser = bodyParser.json();

// storage.init();

// app.get('/student/:id', async (req, res) => {
//   if ((await storage.keys()).includes(req.params.id)) {
//     res.send(await storage.getItem(req.params.id));
//   }
//   else {
//     res.send("Student not found");
//   }

// }
// );

// app.listen(5000, () => { console.log("Server running on port 5000"); });

//finally create an endpoint that looks for the topper among the class. For this, all the data should be retrieved and sifted through, and in the browser, display the ida with the highest GPA.

// var express = require('express');
// var app = express();

// const storage = require('node-persist');

// var bodyParser = require('body-parser');

// var jsonParser = bodyParser.json();

// storage.init();

// app.get('/student', async (req, res) => {
//   let data = await storage.values();
//   let topper = data.reduce((a, b) => a.GPA > b.GPA ? a : b);
//   res.send(topper);
// }
// );

// app.listen(5000, () => { console.log("Server running on port 5000"); });

//finally create an endpoint that looks for the topper among the class. For this, all the data should be retrieved and sifted through, and in the browser, display the id with the highest GPA.
//output: { student_name: 'Singh', GPA: 9.5 }