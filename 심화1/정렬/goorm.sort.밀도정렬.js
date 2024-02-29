// Run by Node.js
const readline = require('readline');

// 무게 / 부피
function solution(arr) {
  arr.sort((a, b) => {
    const aDensity = a.w / a.v;
    const bDensity = b.w / b.v;
    if (aDensity == bDensity) {
      return b.w - a.w;
    } else if (aDensity == bDensity && a.w == b.w) {
      return a.index - b.index;
    } else {
      return bDensity - aDensity;
    }
  });
  console.log(arr[0].index);
}

(async () => {
  let rl = readline.createInterface({ input: process.stdin });
  let n = 0;
  let cnt = 0;
  const arr = [];
  for await (const line of rl) {
    if (!n) {
      n = line;
    } else {
      const temp = line.split(' ');
      arr.push({ w: temp[0], v: temp[1], index: cnt + 1 });
      cnt++;
    }

    if (n == cnt) {
      rl.close();
    }
  }

  solution(arr);
  process.exit();
})();
