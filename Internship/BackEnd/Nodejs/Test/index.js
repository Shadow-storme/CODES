// var http = require('http');
// var fs = require("fs");

// http.createServer(function (req, res) {
//   fs.readFile('test.html', function (err, data) {
//     res.writeHead(200, { 'Content-Type': 'text/html' });
//     res.end(data);
//     res.write(data);
//     return res.end();
//   })
// }).listen(8080);

// let http = require('http');
// let fs = require('fs');
// let url = require('url');

// let addr = 'http://localhost:8080/default.html?name=singh';
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
// }).listen(8080);

// const url = require('url');

// const urlString = 'http://localhost:8080/default.html?id=009&name=Singh';

// // Parse the URL
// const parsedUrl = url.parse(urlString, true);

// // Retrieve the student's id and name from the query string
// const studentId = parsedUrl.query.id;
// const studentName = parsedUrl.query.name;

// console.log(`Student ID: ${studentId}`);
// console.log(`Student Name: ${studentName}`);

var express = require('express');
var app = express();

app.get('/test', function (req, res) {
  res.send('Hello World');
});

app.listen(8080, () => { console.log("Server running on port 8080"); });