# [백준] 1874번 스택 수열 (Python 파이썬)
# https://www.acmicpc.net/problem/1874
import sys

N = int(sys.stdin.readline())
stack = []
answer = []
flag = 0
cur = 1
for i in range(N):
  num = int(sys.stdin.readline());
  while cur <= num:
    stack.append(cur)
    answer.append('+')
    cur += 1      
  if stack[-1] == num:
    stack.pop()
    answer.append('-')
  else:
    print("NO")
    flag = 1
    break
if flag == 0:
  for i in answer:
    print(i)

print('https://sooleeandtomas.tistory.com/74')