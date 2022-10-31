from collections import deque

graph = [
  [],
  [2, 3, 8],
  [1, 7],
  [1, 4, 5],
  [3, 5],
  [3, 4],
  [7],
  [2, 6, 8],
  [1, 7]
]

def bfs(graph, start, visited):
  #1.queue에 첫 노드부터 삽입
  queue = deque([start])
  #2. 방문한 노드 기억
  visited[start] = True
  #3. queue가 바닥날때까지 반복
  while queue:
    #4. queue의 첫번째 원소 pop
    v = queue.popleft()
    #5. 순차적으로 graph 순회
    for i in graph[v]:
      #6. 방문하지 않은 노드가 있는 경우 queue에 삽입
      if not visited[i]:
        queue.append(i)
        #7. 방문한 노드 기억
        visited[i] = True

visited = [False] * 9 
print(bfs(graph, 1, visited))