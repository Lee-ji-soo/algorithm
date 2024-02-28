let hashMap = Array.from({ length: 2000 }, (v) => 0);
hashMap[0] = 0;
hashMap[1] = 1;
hashMap[2] = 2;

function fibo(a) {
  if (hashMap[a] !== 0) {
    return hashMap[a];
  }

  if (a < 0) return 0;
  if (a == 0) return 0;
  if (a == 1) return 1;
  if (a == 2) return 2;

  const nextA = fibo(a - 1);
  const nextB = fibo(a - 2);
  const result = (nextA + nextB) % 1234567;
  hashMap[a] = result;
  return result;
}

function solution(n) {
  var answer = 0;
  answer = fibo(n);
  console.log(hashMap);
  return answer;
}
