function getArrSum(arr) {
  return arr.reduce((acc, cur) => {
    return acc + cur;
  }, 0);
}
function solution(bridge_length, weight, truck_weights) {
  let answer = 0;
  let running_trucks = Array.from({ length: bridge_length }, (v) => 0);

  while (truck_weights.length) {
    running_trucks = running_trucks.slice(1, running_trucks.length);
    let top = truck_weights[0];

    if (getArrSum(running_trucks) + top <= weight) {
      running_trucks = [...running_trucks, top];
      truck_weights = truck_weights.slice(1, truck_weights.length);
    } else {
      running_trucks = [...running_trucks, 0];
    }
    answer++;
  }

  answer += bridge_length;
  return answer;
}
