// Run by Node.js
const readline = require('readline');

function calculateTeamValue(N, K, playerInfo) {
  // Initialize a dictionary to hold the max value for each position
  let positionMaxValue = {};
  for (let i = 1; i <= 11; i++) {
    positionMaxValue[i] = 0;
  }

  // Initial selection of players in March of the first year
  playerInfo.forEach(([pos, value]) => {
    if (value > positionMaxValue[pos]) {
      positionMaxValue[pos] = value;
    }
  });

  for (let year = 0; year < K; year++) {
    // Decrease the value of each selected player in August
    for (let pos in positionMaxValue) {
      positionMaxValue[pos] = Math.max(0, positionMaxValue[pos] - 1);
    }

    // Re-select players in November with updated values
    let newMaxValues = {};
    for (let i = 1; i <= 11; i++) {
      newMaxValues[i] = 0;
    }
    playerInfo.forEach(([pos, value]) => {
      if (value > newMaxValues[pos]) {
        newMaxValues[pos] = value;
      }
    });

    // Update the selected players with the new max values
    positionMaxValue = newMaxValues;
  }

  // Calculate the sum of values of the selected players
  let finalValueSum = Object.values(positionMaxValue).reduce(
    (sum, value) => sum + value,
    0,
  );

  console.log(finalValueSum);
  return finalValueSum;
}

// Example input
let N = 0,
  K = 0; // 5 players, over 2 years
let arr = [];

(async () => {
  let rl = readline.createInterface({ input: process.stdin });
  let cnt = 0;
  for await (const line of rl) {
    if (!N) {
      let [a, b] = line.split(' ').map((i) => Number(i));
      N = a;
      K = b;
    } else {
      [position, worth] = line.split(' ').map((i) => Number(i));
      if (arr[position]?.length) {
        arr[position] = [...arr[position], worth];
      } else {
        arr[position] = [worth];
      }
      cnt++;
    }
    if (N == cnt) {
      rl.close();
    }
  }
  calculateTeamValue(N, K, arr);
  process.exit();
})();
