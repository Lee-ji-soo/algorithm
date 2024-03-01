// Run by Node.js

const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});
let n = null;
let m = null;
let arr = [];
let pCount = 0;
let parr = [];

function light(direction, line) {
  if (direction == 1) {
    // 세로
    for (let y = 0; y < n; y++) {
      arr[y][line] = arr[y][line] == 0 ? 1 : 0;
    }
  } else {
    for (let x = 0; x < m; x++) {
      arr[line][x] = arr[line][x] == 0 ? 1 : 0;
    }
  }
}

function solution() {
  for (let i = 0; i < pCount; i++) {
    light(parr[i][0], parr[i][1] - 1);
  }
  for (let y = 0; y < n; y++) {
    console.log(arr[y].join(' '));
  }
}

let nCount = 0;
let pArrCount = 0;

rl.on('line', function (line) {
  if (!n) {
    let [a, b] = line.split(' ').map((i) => +i);
    n = a;
    m = b;
  } else if (n !== nCount) {
    let temp = line.split(' ').map((i) => +i);
    arr.push(temp);
    nCount += 1;
  } else if (!pCount) {
    pCount = +line;
  } else {
    let temp = line.split(' ').map((i) => +i);
    parr.push(temp);
    pArrCount += 1;
    if (pArrCount == pCount) {
      rl.close();
    }
  }
}).on('close', function () {
  solution();
  process.exit();
});
