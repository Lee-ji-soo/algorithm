import sys

N = int(input())

def sol(num):
  if num == 1:
    return 1
  elif num == 2:
    return 2
  elif num == 3:
    return 4
  else:
    return sol(num-1) + sol(num-2) + sol(num-3)

for i in range(N):
  num = int(input())
  print(sol(num))

#https://sooleeandtomas.tistory.com/81