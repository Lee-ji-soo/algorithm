const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let n = [];

function getMul(arr) {
  return arr.reduce((acc, cur, index) => {
    if (index == 0 && cur == 0) {
      return acc;
    } else {
      return acc * cur;
    }
  });
}
function solution() {
  let tempN = [...n];
  let max = getMul(tempN);
  if (n.length == 1) {
    console.log(n[0]);
    return;
  }

  for (let i = 0; i < n.length; i++) {
    tempN[i] = tempN[i] - 1;
    for (let j = i + 1; j < tempN.length; j++) {
      tempN[j] = 9;
    }
    let temp = getMul(tempN);
    max = Math.max(max, temp);
    tempN = [...n];
  }
  console.log(max);
}

rl.on('line', function (line) {
  n = line.split('').map((i) => +i);
  rl.close();
}).on('close', function () {
  solution();
  process.exit();
});
