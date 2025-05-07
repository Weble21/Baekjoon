def dfs(graph, v, visited):
    visited[v] = True
    next_v = graph[v]
    if not visited[next_v]:
       dfs(graph, next_v, visited)
           

t = int(input())
for i in range(t):
    cnt = 0
    n = int(input())
    tmp = list(map(int, input().split()))
    graph = [0] + tmp
    visited = [False] * (n+1)
    cnt = 0
    for j in range(1, n+1):
        if (visited[j] == False):
            dfs(graph, j, visited)
            cnt += 1
    print(cnt)
