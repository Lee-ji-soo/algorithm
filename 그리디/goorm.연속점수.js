// Run by Node.js
const readline = require('readline');

function solution(arr) {
  let answer = arr[0];
  let max = -2e5;
  for (let i = 0; i < arr.length; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }

  for (let i = 0; i < arr.length - 1; i++) {
    if (arr[i + 1] - arr[i] == 1) {
      answer += arr[i + 1];
      if (max < answer) {
        max = answer;
      }
    } else {
      answer = arr[i + 1];
      if (max < answer) {
        max = answer;
      }
    }
  }
  console.log(max);
}

(async () => {
  let rl = readline.createInterface({ input: process.stdin });
  let arr = [];
  let n = 0;
  let count = 0;
  for await (const line of rl) {
    if (!n) {
      n = line;
    } else {
      arr = line.split(' ').map((i) => Number(i));
    }
    if (arr.length) {
      rl.close();
    }
  }
  solution(arr);
  process.exit();
})();
