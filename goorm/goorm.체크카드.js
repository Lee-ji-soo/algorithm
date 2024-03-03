// Run by Node.js
const readline = require('readline');

let lineCnt = 0;
let account = 0;
let n = 0;
let arr = [];
let queue = [];

function solution() {
  for (let i = 0; i < arr.length; i++) {
    let nowType = arr[i][0];
    let nowPay = arr[i][1];
    if (nowType === 'deposit') {
      account += nowPay;
      while (account >= queue[0] && queue.length > 0) {
        account -= queue[0];
        queue.shift();
      }
    } else if (nowType === 'pay') {
      if (account >= nowPay) {
        account -= nowPay;
      }
    } else if (nowType === 'reservation') {
      if (account >= nowPay && queue.length == 0) {
        account -= nowPay;
      } else {
        queue.push(nowPay);
      }
    }
  }
  console.log(account);
}

(async () => {
  let rl = readline.createInterface({ input: process.stdin });
  for await (const line of rl) {
    if (!n) {
      let [a, b] = line.split(' ').map((i) => +i);
      account = a;
      n = b;
    } else {
      let l = line.split(' ').map((i, index) => (index == 1 ? +i : i));
      arr.push(l);
      lineCnt += 1;
    }
    if (lineCnt == n) {
      rl.close();
    }
  }

  solution();
  process.exit();
})();
