// Run by Node.js
const readline = require('readline');

function sortArr(arr) {
  for (let i = 1; i < arr.length; i++) {
    if (!arr[i]) arr[i] = [0];
    arr[i] = arr[i].sort((a, b) => b - a);
  }
}
function solution(arr, K) {
  sortArr(arr);
  for (let year = 0; year < K; year++) {
    for (let month = 1; month <= 12; month++) {
      if (month == 3 || month == 11) {
        sortArr(arr);
      }
      if (month == 8) {
        for (let i = 1; i < arr.length; i++) {
          const temp = arr[i][0] - 1;
          arr[i][0] = temp < 0 ? 0 : temp;
        }
      }
    }
  }
  let answer = 0;
  for (let i = 1; i < arr.length; i++) {
    answer += arr[i][0];
  }
  console.log(answer);
}

(async () => {
  let rl = readline.createInterface({ input: process.stdin });

  let N = 0;
  let K = 0;
  let arr = [];
  let cnt = 0;
  for await (const line of rl) {
    if (!N) {
      let [a, b] = line.split(' ').map((i) => Number(i));
      N = a;
      K = b;
    } else {
      [position, worth] = line.split(' ').map((i) => Number(i));
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
