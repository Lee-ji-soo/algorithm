// Run by Node.js
const readline = require('readline');

function solution(hash, testCntArr) {
  let answer = (testCntArr.length - 1) * 60;
  for (let i = 0; i < testCntArr.length; i++) {
    hash[i + 1] = hash[i + 1].sort((a, b) => a - b).slice(0, testCntArr[i]);

    const tempHash = hash[i + 1];
    for (let j = 0; j < tempHash.length; j++) {
      answer += tempHash[j];
      if (j <= tempHash.length - 2) {
        answer += tempHash[j + 1] - tempHash[j];
      }
    }
  }
  console.log(answer);
}

(async () => {
  let rl = readline.createInterface({ input: process.stdin });

  let n = 0;
  let cnt = 0;
  let hash = {};
  let testCntArr = [];
  for await (const line of rl) {
    if (!n) {
      n = Number(line) + 1;
    } else if (cnt == 0) {
      testCntArr = line.split(' ').map((i) => Number(i));
      cnt++;
    } else {
      const [level, time] = line.split(' ').map((i) => Number(i));
      cnt++;
      if (hash[level]?.length > 0) {
        hash[level] = [...hash[level], time];
      } else {
        hash[level] = [time];
      }
    }
    if (n == cnt) {
      rl.close();
    }
  }

  solution(hash, testCntArr);
  process.exit();
})();
