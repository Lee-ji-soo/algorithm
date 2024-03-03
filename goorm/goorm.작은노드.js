const readline = require('readline');
let rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let n, m, k;
let hash = {};
let used = [];
let q = [];
function solution() {
  q.push(k);
  let qCount = 0;
  let lastN = 0;
  while (q.length > 0) {
    let now = q.shift();
    if (used[now] != 1) {
      qCount += 1;
      lastN = now;
      used[now] = 1;
    }
    let size = hash[now]?.length || 0;
    for (let i = 0; i < size; i++) {
      let next = hash[now][i];
      if (used[next] == 1) continue;
      q.push(next);
      break;
    }
  }
  console.log(qCount, lastN);
}

let count = 0;
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
    if (hash[to]?.length) {
      hash[to] = [...hash[to], from].sort((a, b) => a - b);
    } else {
      hash[to] = [from];
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
