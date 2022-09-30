# [백준] 1874번 스택 수열 (Python 파이썬)
# https://www.acmicpc.net/problem/1874
import sys
def solution(n):
  stack = []
  answer = []
  flag = 0
  cur = 1
  for i in range(n):
    num = int(sys.stdin.readline());
    while cur <= num:
      stack.append(cur)
      answer.append('+')
      cur += 1      

    print(stack, cur)
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
  
N = int(sys.stdin.readline())
solution(N)