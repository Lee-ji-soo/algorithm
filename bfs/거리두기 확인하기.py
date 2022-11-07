from collections import deque

def bfs(p):
  start = []
  for i in range(1):
    for j in range(5):
      if p[i][j] == 'P':
        start.append([i,j])

  for s in start:
    #print(' ')
    #print('start!', s, '-------------------------------')
    #print(' ')
    queue = deque([s])
    visited = [[0]* 5 for i in range(5)]
    distance = [[0]* 5 for i in range(5)]
    visited[s[0]][s[1]] = 1

    while queue:
      y, x = queue.popleft()
      #print('popleft', x, y)
      dx = [-1, 1, 0, 0]
      dy = [0, 0, -1, 1]

      for i in range(4):
        #print('dx[i]:', dx[i], ' x:', x, ' dy[i]:', dy[i], ' y:', y)
        print('')
        nx = x + dx[i]
        ny = y + dy[i]

        if 0 <= nx < 5 and 0 <= ny <5 and visited[ny][nx] == 0:
          if p[ny][nx] == 'O':
            queue.append([ny, nx])
            visited[ny][nx] = 1
            distance[ny][nx]= distance[y][x] + 1
          if p[ny][nx] == "P" and distance[y][x] <= 1:
            return 0
          #print('inside for - visited', visited)
          #print('inside for - distance', distance)
      #print('visited', visited)
      #print('queue', queue)
      #print('- - - - - - - - - - - - - - - - -')
  return 1
    
def solution(places):
  answer = []

  for i in places:
    answer.append(bfs(i))
  return answer 

print(solution([["POOOP", "OXXOX", "OPXPX", "OOXOX", "POXXP"]]))

#문제풀이 : https://sooleeandtomas.tistory.com/94