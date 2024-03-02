// Run by Node.js
const readline = require('readline');
let queue = [];
let n = null;
let qSize = null;

(async () => {
  let rl = readline.createInterface({ input: process.stdin });

  let count = 0;
  for await (const line of rl) {
    if (!n) {
      let [a, b] = line.split(' ').map((i) => +i);
      n = a;
      qSize = b;
    } else {
      let [type, num] = line.split(' ');
      if (type == 'pop') {
        if (queue.length == 0) {
          console.log('Underflow');
        } else {
          console.log(queue[0]);
          queue = queue.slice(1, queue.length);
        }
      } else {
        if (queue.length >= qSize) {
          console.log('Overflow');
        } else {
          queue.push(Number(num));
        }
      }
      count += 1;
      if (count == n) {
        rl.close();
      }
    }
  }

  process.exit();
})();
