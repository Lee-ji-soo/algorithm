from itertools import combinations
from collections import Counter

def solution(orders, course):
  answer = []
  for combiNum in course:
    maps = []
    for order in orders:
      combi = combinations(order, combiNum)
      for combiEle in combi:
        str = ''.join(sorted(combiEle))
        maps.append(str)
    map = Counter(maps).most_common() #Counter: 딕셔너리 형태, -> most_commont(): 리스트에 담긴 튜플 형태 
    
    print('--------------------')
    print('map:', map)
    
    
    # count값이 2 이상 이어야 한다.
    # count값이 저장된 map을 돌며 같은 수의 combination 중 가장 높은 count값을 가진 메뉴를 answer에 담아준다.
    # 같은 수의 combination에서 count값이 같은 것들은 answer에 또 담을 수 있다.
    # * 같은 수의 combination란 ?  2combi: {'AB', "BC", "CA"} 3Combi: {'ABC', "BCD", "DEF"}
    
    if not map:
      continue
    temp = map[0][1]
    for l, count in map:
      if(count > 1 and count == temp):
        answer += [l]
  return sorted(answer)

print(solution(["XYZ", "XWY", "WXA"], [2,3,4]))
#https://sooleeandtomas.tistory.com/91