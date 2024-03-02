const a = ['A', 'B', 'C', 'D', 'E'];
const path = [];
const used = [];
const levelNum = 3;
const branch = 5;

function run(level) {
  if (level == levelNum) {
    console.log(path.join(''));
    return;
  }

  for (let i = 0; i < branch; i++) {
    if (used[i] == 1) continue;
    used[i] = 1;
    path[level] = a[i];
    run(level + 1);
    used[i] = 0;
  }
}

run(0);
// 'ABC';
// 'ABD';
// 'ABE';
// 'ACB';
// 'ACD';
// 'ACE';
// 'ADB';
// 'ADC';
// 'ADE';
// 'AEB';
// 'AEC';
// 'AED';
// 'BAC';
// 'BAD';
// 'BAE';
// 'BCA';
// 'BCD';
// 'BCE';
// 'BDA';
// 'BDC';
// 'BDE';
// 'BEA';
// 'BEC';
// 'BED';
// 'CAB';
// 'CAD';
// 'CAE';
// 'CBA';
// 'CBD';
// 'CBE';
// 'CDA';
// 'CDB';
// 'CDE';
// 'CEA';
// 'CEB';
// 'CED';
// 'DAB';
// 'DAC';
// 'DAE';
// 'DBA';
// 'DBC';
// 'DBE';
// 'DCA';
// 'DCB';
// 'DCE';
// 'DEA';
// 'DEB';
// 'DEC';
// 'EAB';
// 'EAC';
// 'EAD';
// 'EBA';
// 'EBC';
// 'EBD';
// 'ECA';
// 'ECB';
// 'ECD';
// 'EDA';
// 'EDB';
// 'EDC';
