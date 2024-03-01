// Run by Node.js

const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let N = 0;
let P = 0;
let arr = [];

rl.on('line', function (line) {
  [a, b] = line.split(' ').map((i) => Number(i));
  N = a;
  P = b;
  rl.close();
}).on('close', function () {
  arr[0] = N;
  let answer = 0;
  let index = 0;

  while (true) {
    const mod = (arr[index] * N) % P;
    let tempIndex = 0;
    const hasCycle = arr.some((i, idx) => {
      tempIndex = idx;
      return i == mod;
    });

    if (hasCycle) {
      answer = index - tempIndex + 1;
      break;
    }
    arr[index + 1] = mod;
    index++;
  }
  console.log(answer);
  process.exit();
});
