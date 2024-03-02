// Run by Node.js
let t = null;
let coupons = [];
const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

function solution() {
  let count = 0;
  for (let i = 0; i < coupons.length; i++) {
    let [season, common] = coupons[i];
    count = Math.min(
      Math.floor(season / 5),
      Math.floor((season + common) / 12),
    );
    console.log(count);
  }
}

let lineCnt = 0;
rl.on('line', function (line) {
  if (!t) {
    t = +line;
  } else {
    let [season, common] = line.split(' ').map((i) => +i);
    coupons.push([season, common]);
    lineCnt += 1;
  }
  if (lineCnt === t) {
    rl.close();
  }
}).on('close', function () {
  solution();
  process.exit();
});
