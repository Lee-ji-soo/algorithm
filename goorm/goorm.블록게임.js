// Run by Node.js
const readline = require('readline');
let lineCnt = 0;
let n = 0;
let arr = [];
let score = [];
let stack = [];

let direction = {
  R: [0, 1],
  L: [0, -1],
  U: [-1, 0],
  D: [1, 0],
};
function solution() {
  stack.push({ y: 0, x: 0, score: 1 });
  for (let i = 0; i < n; i++) {
    let d = arr[i];
    let top = stack[stack.length - 1];
    let dy = top.y + direction[d][0];
    let dx = top.x + direction[d][1];

    let next = { y: dy, x: dx, score: score[i] };

    let findIndex = 0;
    let has = stack.some((i, index) => {
      if (i.y == next.y && i.x == next.x) {
        findIndex = index;
        return true;
      } else {
        return false;
      }
    });
    if (has) {
      for (let j = stack.length - 1; j >= findIndex; j--) {
        stack.pop();
      }
      stack.push(next);
    } else {
      stack.push(next);
    }
  }

  let answer = 0;
  for (let i = 0; i < stack.length; i++) {
    answer += stack[i].score;
  }
  console.log(answer);
}

(async () => {
  let rl = readline.createInterface({ input: process.stdin });

  for await (const line of rl) {
    if (!n) {
      n = +line;
    } else if (!arr.length) {
      arr = line.split('');
    } else {
      score = line.split(' ').map((i) => +i);
      rl.close();
    }
  }

  solution();
  process.exit();
})();
