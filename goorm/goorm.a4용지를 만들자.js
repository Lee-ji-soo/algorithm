// Run by Node.js
const readline = require('readline');

let w = 0;
let h = 0;

const a4w = 20;
const a4h = 40;

function solution() {
  const typeA = parseInt(w / a4w, 10) * parseInt(h / a4h, 10);
  const typeB = parseInt(w / a4h, 10) * parseInt(h / a4w, 10);
  // 세로도 둘 수 있고, 가로도 둘 수 있는 크기
  const typeC = 2 * (parseInt(w / a4h, 10) * parseInt(h / a4h, 10));
  console.log(typeA + typeB - typeC);
}

(async () => {
  let rl = readline.createInterface({ input: process.stdin });

  for await (const line of rl) {
    let [a, b] = line.split(' ').map((i) => +i);
    w = a;
    h = b;
    rl.close();
  }

  if (w <= 0 || h <= 0) {
    console.log(0);
  } else {
    solution();
  }
  process.exit();
})();
