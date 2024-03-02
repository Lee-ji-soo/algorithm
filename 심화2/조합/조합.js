const a = ['A', 'B', 'C', 'D', 'E'];
const path = [];
const used = [];
const levelNum = 3;
const branch = 5;

function run(start, level) {
  if (level == levelNum) {
    console.log(path.join(''));
    return;
  }

  for (let i = start; i < branch; i++) {
    if (used[i] == 1) continue;
    used[i] = 1;
    path[level] = a[i];
    run(i, level + 1);
    used[i] = 0;
  }
}

run(0, 0);

// 'ABC';
// 'ABD';
// 'ABE';
// 'ACD';
// 'ACE';
// 'ADE';
// 'BCD';
// 'BCE';
// 'BDE';
// 'CDE';
