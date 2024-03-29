const a = ['A', 'B', 'C', 'D', 'E'];
const path = [];

const levelNum = 3;
const branch = 5;

function run(level) {
  if (level == levelNum) {
    console.log(path.join(''));
    return;
  }

  for (let i = 0; i < branch; i++) {
    path[level] = a[i];
    run(level + 1);
  }
}

// answer:
// AAA
// AAB
// AAC
// AAD
// AAE
// ABA
// ABB
// ABC
// ABD
// ABE
// ACA
// ACB
// ACC
// ACD
// ACE
// ADA
// ADB
// ADC
// ADD
// ADE
// AEA
// AEB
// AEC
// AED
// AEE
// BAA
// BAB
// BAC
// BAD
// BAE
// BBA
// BBB
// BBC
// BBD
// BBE
// BCA
// BCB
// BCC
// BCD
// BCE
// BDA
// BDB
// BDC
// BDD
// BDE
// BEA
// BEB
// BEC
// BED
// BEE
// CAA
// CAB
// CAC
// CAD
// CAE
// CBA
// CBB
// CBC
// CBD
// CBE
// CCA
// CCB
// CCC
// CCD
// CCE
// CDA
// CDB
// CDC
// CDD
// CDE
// CEA
// CEB
// CEC
// CED
// CEE
// DAA
// DAB
// DAC
// DAD
// DAE
// DBA
// DBB
// DBC
// DBD
// DBE
// DCA
// DCB
// DCC
// DCD
// DCE
// DDA
// DDB
// DDC
// DDD
// DDE
// DEA
// DEB
// DEC
// DED
// DEE
// EAA
// EAB
// EAC
// EAD
// EAE
// EBA
// EBB
// EBC
// EBD
// EBE
// ECA
// ECB
// ECC
// ECD
// ECE
// EDA
// EDB
// EDC
// EDD
// EDE
// EEA
// EEB
// EEC
// EED
// EEE
