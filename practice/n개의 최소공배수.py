def solution(arr):
  answer = 0
  n = 1
  while True:
    flag = True
    maxMulti = max(arr) * n
    for i in list(arr):
      if maxMulti % i != 0:
        flag = False
    print (flag, maxMulti)
    if flag == False:
      n += 1
      continue
    else:
      answer = maxMulti
      break
  return answer