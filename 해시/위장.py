def solution(clothes):
  answer = 1
  map = {}
  for index, type in clothes:    
    map[type] = map.get(type, 1) + 1
    #map에서.get(type)을 할 수 있다. 값이 없으면 1을 default로 가져올 수 있다.
    #입지않는 케이스를 고려해서 1을 default값으로 지정
    
  for type in map:
    answer *= map[type]
    #경우의 수를 구한다. -> a경우의 수 * b경우의 수 * c경우의 수를 하면됨
  return answer -1 
  #아무것도 입지 않은 경우를 고려함 (문제의 조건에 "스파이는 하루에 최소 한 개의 의상은 입습니다."라고 나와있음)
  
print(solution([["yellow_hat", "headgear"], ["blue_sunglasses", "eyewear"], ["green_turban", "headgear"]]))

#https://sooleeandtomas.tistory.com/84