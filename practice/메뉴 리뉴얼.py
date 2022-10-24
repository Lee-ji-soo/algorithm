from itertools import combinations
from collections import Counter

def solution(orders, course):
  answer = []
  for i in course:
    maps = []
    for k in orders:
      combi = combinations(k, i)
      for l in combi:
        str = ''.join(l)
        maps.append(str)
    map = Counter(maps).most_common()

    temp = map[0][1]
    print(map[0][1])
    for l, count in map:
      if(count > 1 and count == temp):
        answer += l
        temp = count
  return sorted(answer)

print(solution(["XYZ", "XWY", "WXA"], [2,3,4]))