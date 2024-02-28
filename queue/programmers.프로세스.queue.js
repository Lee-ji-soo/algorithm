function solution(priorities, location) {
  var answer = 0;
  let entries = Object.entries(priorities);

  while (entries.length) {
    let top = entries[0];
    entries = entries.slice(1, entries.length);

    if (entries.some((entry) => entry[1] > top[1])) {
      entries = [...entries, top];
    } else {
      answer++;
      if (top[0] == location) {
        break;
      }
    }
  }
  return answer;
}
