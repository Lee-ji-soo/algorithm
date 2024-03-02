const a = ['A', 'B', 'C'];
const path = [];
const used = [];
const levelNum = 2;
const branch = 3;

function run(start, level) {
  if (level == levelNum) {
    console.log(path.join(''));
    return;
  }

  for (let i = start; i < branch; i++) {
    path[level] = a[i];
    run(i, level + 1);
  }
}

run(0, 0);

// 'AA';
// 'AB';
// 'AC';
// 'BB';
// 'BC';
// 'CC';
