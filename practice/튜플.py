def solution(s):
  t = s[2:-2].split('},{')
  p = list(map(lambda x: x.split(',') , t))
  sort = sorted(p, key=len)
  answer = []
  #print('sort',sort)
  for i in sort:
    #print("i", i)
    for j in i:
      #print("j", j)
      if(j in answer):
        continue
      else:
        answer.append(j)
      #print('answer', answer)
      # answer = list(set(answer))
  return list(map(lambda x:int(x), answer))

#print(solution("{{20,111},{111}}"))


# sort [['111'], ['20', '111']]
# i ['111']
# j 111
# answer ['111']
# i ['20', '111']
# j 20
# answer ['111', '20']
# j 111

# [111, 20]

#문제 풀이 : https://sooleeandtomas.tistory.com/89