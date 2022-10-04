def solution(citations):
  answer = 0
  citations.sort()
  hIndex = len(citations)
  for index, i in enumerate(citations):
    if(i >= hIndex - index):
      answer = hIndex - index
      break;
  return answer
#https://sooleeandtomas.tistory.com/78