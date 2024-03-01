// Run by Node.js
const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let cnt = 0;
let arr = [];
let t = null;
let n = null;
let k = null;
let tempK = 0;

function getSum(y, x) {
  let result = 0;
  for (let i = y; i < y + k; i++) {
    for (let j = x; j < x + k; j++) {
      if (arr[i][j] === 1) {
        result++;
      }
    }
  }
  return result;
}

function solution() {
  let mini = 2e5;
  for (let y = 0; y <= n - k; y++) {
    for (let x = 0; x <= n - k; x++) {
      let temp = 0;
      temp = getSum(y, x);
      if (mini > temp) {
        mini = temp;
      }
    }
  }
  console.log(mini);
}

rl.on('line', function (line) {
  if (!t) {
    t = +line;
  } else if (!n) {
    let [a, b] = line.split(' ').map((i) => Number(i));
    n = a;
    k = b;
  } else {
    const tempArr = line.split(' ').map((i) => Number(i));
    arr.push(tempArr);
    cnt++;
  }

  if (cnt === n) {
    solution();
    n = null;
    k = null;
    cnt = 0;
    arr = [];
    tempK += 1;
  }
  if (tempK === k) {
    rl.close();
  }
}).on('close', function () {
  process.exit();
});
