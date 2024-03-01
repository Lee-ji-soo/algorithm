// Run by Node.js
const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });

let values = [];
let n = 0; //values갯수
let k = 0; //results갯수
let segment;

function init(size) {
  segment = new Array(size).fill(0);
}

function makeSegment(index, s, e) {
  if (s == e) {
    segment[index] = values[s];
    return values[s];
  }

  let mid = Math.floor((s + e) / 2);
  let a = makeSegment(index * 2, s, mid);
  let b = makeSegment(index * 2 + 1, mid + 1, e);
  segment[index] = a + b;
  return a + b;
}

function getSum(targetA, targetB, index = 1, start = 0, end = n - 1) {
  if (targetB < start || targetA > end) {
    return 0;
  }
  if (targetA <= start && targetB >= end) {
    return segment[index];
  }

  let mid = Math.floor((start + end) / 2);
  const a = getSum(targetA, targetB, index * 2, start, mid);
  const b = getSum(targetA, targetB, index * 2 + 1, mid + 1, end);
  return a + b;
}

function solution(i, j) {
  const sum = getSum(i, j);
  if (sum > 0) {
    console.log(`+${sum}`);
  } else {
    console.log(sum);
  }
}

let cnt = 0;
rl.on('line', function (line) {
  if (!n) {
    let [a, b] = line.split(' ').map((i) => +i);
    n = a;
    k = b;
    init(n * 4);
  } else if (!values.length) {
    values = line.split(' ').map((i) => +i);
    makeSegment(1, 0, n - 1);
  } else {
    let [a, b] = line.split(' ');
    solution(Number(a) - 1, Number(b) - 1);
    cnt++;
    if (cnt == k) {
      rl.close();
    }
  }
}).on('close', function () {
  process.exit();
});
