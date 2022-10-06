def dfs(n, x, queen):
  result = 0
  
  if x == n:
    return 1
  for i in range(n):
    queen[x] = i

    if check(x, queen):
      result += dfs(n, x+1, queen)

  return result 

def check(x, queen):
  for i in range(x):
    if (queen[x] == queen[i]) or abs(x-i) == abs(queen[x] - queen[i]):
      return False
  return True
  
def solution(n):
  queen = [0] * n
  answer = dfs(n, 0, queen)
  return answer