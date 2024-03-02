// Run by Node.js
const readline = require('readline');
let n = 0;
let arr = [];

function solution() {
  let cache = Array.from({ length: arr.length }, (i) => 0);
  cache[0] = arr[0];

  let max = -2e5;
  for (let i = 1; i < arr.length; i++) {
    let temp = Math.max(0, cache[i - 1]) + arr[i];
    cache[i] = temp;
    if (max < temp) {
      max = temp;
    }
  }
  console.log(max);
}

(async () => {
  let rl = readline.createInterface({ input: process.stdin });
  for await (const line of rl) {
    if (!n) {
      n = +line;
    } else {
      arr = line.split(' ').map((i) => +i);
      rl.close();
    }
  }
  solution();
  process.exit();
})();
