// Run by Node.js
const readline = require('readline');
let n = 0;
let lineCount = 0;
let arr = [];

let min = 2e5;
let max = -2e5;
let path = [];

function solution(num, lev) {
  path[lev - 1] = arr[num - 1];
  if (lev == n) {
    let sum = 0;
    for (let i = 0; i < path.length; i++) {
      sum += path[i].charCodeAt(0) - 64;
    }
    if (max < sum) {
      max = sum;
    }
    if (min > sum) {
      min = sum;
    }
    return;
  }
  solution(num * 2, lev + 1);
  solution(num * 2 + 1, lev + 1);
}

(async () => {
  let rl = readline.createInterface({ input: process.stdin });

  for await (const line of rl) {
    if (!n) {
      n = +line;
    } else {
      let temp = line.split('');
      arr = [...arr, ...temp];
      lineCount += 1;
    }

    if (lineCount == n) {
      rl.close();
    }
  }
  solution(1, 1);
  console.log(min);
  console.log(max);
  process.exit();
})();
