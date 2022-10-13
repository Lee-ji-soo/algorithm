def solution(number, k):
  answer = []

  for num in number:
    if not answer:
      answer.append(num)
      continue
    #print('----------------')
    while answer and k > 0:
      #print('1번',answer, num)
      if int(answer[-1]) < int(num):
        answer.pop(-1)
        k -= 1
        #print('2번')
        continue
      else:
        #print('3번')
        break
    
    answer.append(num)
    #print('4번', answer)
  if k != 0:
    answer = answer[:-k]
  return ''.join(answer)
  
#https://sooleeandtomas.tistory.com/86