const readline = require('readline');
let rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let n, m, k;
let hash = {};
let count = 0;
let used = [];
let q = [];
function solution() {
  q.push(k);
  let qCount = 1;
  let lastN = k;
  used[k] = 1;

  while (q.length) {
    let now = q.shift();
    let size = hash[now]?.length;
    if (size) {
      let next = hash[now][0];
      if (used[next] == 1) continue;
      qCount += 1;
      lastN = next;
      used[next] = 1;
      q.push(next);
    }
  }
  console.log(qCount, lastN);
}

rl.on('line', (line) => {
  if (!n) {
    let [a, b, c] = line.split(' ').map((i) => +i);
    n = a;
    m = b;
    k = c;
  } else {
    let [from, to] = line.split(' ').map((i) => +i);
    if (hash[from]?.length) {
      hash[from] = [...hash[from], to].sort((a, b) => a - b);
    } else {
      hash[from] = [to];
    }
    count += 1;
  }
  if (count == m) {
    rl.close();
  }
});

rl.on('close', () => {
  solution();
  process.exit();
});
