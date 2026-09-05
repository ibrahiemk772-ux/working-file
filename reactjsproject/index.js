const http = require('http');
const queryString = require('querystring');

const server = http.createServer((req, res) => {
    if (req.method === 'POST') {
        let body = '';

        req.on('data', chunk => {
            body += chunk.toString();
        });

        req.on('end', () => {
            const data = queryString.parse(body);
            const name = data.name || '';
            const roll = data.roll || '';

            console.log('name:', name, 'roll:', roll);
            res.writeHead(200, { 'Content-Type': 'text/html' });
            res.write('<h1>Data received successfully</h1>');
            res.write('<p>Name: ' + name + '</p>');
            res.write('<p>Roll: ' + roll + '</p>');
            res.end();
        });
    } else {
        res.writeHead(200, { 'Content-Type': 'text/html' });
        res.end('<h1>Send a POST request to submit data</h1>');
    }
});

const PORT = 4000;
server.listen(PORT, () => {
    console.log('Server is running on port', PORT);
});
