// Run by Node.js
// key point: 어떤 길이 2 이상의 임의의 구간이 주어지면 그 구간 안에 n의 배수보다 2의 배수의 개수가 항상 많거나 같다.

const readline = require('readline');

function cd(num) {
  for (let j = 2; j <= num; j++) {
    if (num % j == 0) {
      return j;
    }
  }
  return num;
}

function solution(num1, num2) {
  if (num1 != num2) {
    console.log(2);
    return;
  }
  console.log(cd(num1));
}

(async () => {
  let rl = readline.createInterface({ input: process.stdin });
  let num1, num2;
  for await (const line of rl) {
    let [a, b] = line.split(' ').map((i) => +i);
    num1 = a;
    num2 = b;
    rl.close();
  }
  solution(num1, num2);
  process.exit();
})();
