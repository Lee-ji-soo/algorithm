// Run by Node.js
const readline = require('readline');

let nextMaxValues = [];
let arr = [];

function getSumValues() {
  let result = 0;
  for (let i = 0; i < nextMaxValues.length; i++) {
    result += nextMaxValues[i];
  }
  return result;
}

function decreaseValues() {
  nextMaxValues = nextMaxValues.map((i) => Math.max(0, i - 1));
}

function initValues() {
  for (let i = 0; i < 11; i++) {
    nextMaxValues[i] = 0;
  }
}

function setNextMaxValues() {
  for (let i = 0; i < nextMaxValues.length; i++) {
    for (let j = 0; j < arr[i].length; j++) {
      if (nextMaxValues[i] < arr[i][j]) {
        let temp = nextMaxValues[i];
        nextMaxValues[i] = arr[i][j];
        arr[i] = [...arr[i].slice(0, j), ...arr[i].slice(j + 1, arr[j].length)];
        if (nextMaxValues[i] > 0) {
          arr[i] = [...arr[i], temp];
        }
      }
    }
  }
}

function solution(arr, K) {
  initValues();
  setNextMaxValues();
  for (let year = 0; year < K; year++) {
    for (let month = 1; month <= 12; month++) {
      if (month == 3 || month == 11) {
        setNextMaxValues();
      }
      if (month == 8) {
        decreaseValues();
      }
    }
  }
  let answer = 0;
  answer = getSumValues();
  console.log(answer);
}

(async () => {
  let rl = readline.createInterface({ input: process.stdin });

  let N = 0;
  let K = 0;
  let cnt = 0;
  for await (const line of rl) {
    if (!N) {
      let [a, b] = line.split(' ').map((i) => Number(i));
      N = a;
      K = b;
    } else {
      let lines = line.split(' ').map((i) => Number(i));
      const position = lines[0] - 1;
      const worth = lines[1];
      if (arr[position]?.length) {
        arr[position] = [...arr[position], worth];
      } else {
        arr[position] = [worth];
      }
      cnt++;
    }
    if (N == cnt) {
      rl.close();
    }
  }
  solution(arr, K);
  process.exit();
})();
