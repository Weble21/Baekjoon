import sys
sys.setrecursionlimit(10**6)

def dfs(y,x):
    list_x = [0, 0, -1, 1]
    list_y = [-1, 1, 0, 0]
    for i in range(4):
        _x = x + list_x[i]
        _y = y + list_y[i]
        if(0 <= _y < n and 0 <= _x < m) and arr[_y][_x] == 1:
            arr[_y][_x] = -1
            dfs(_y, _x)
            
            
                
t = int(input())
for temp in range(t):
    tmp = input().split()
    li = list(map(int, tmp))
    m = li[0]
    n = li[1]
    k = li[2]
    arr = [[0] * m for _ in range(n)]
    for _ in range(k):
        list_temp = input().split()
        temp = list(map(int, list_temp))
        x = temp[0]
        y = temp[1]
        arr[y][x] = 1

    cnt = 0
    for N in range(n):
        for M in range(m):
            if arr[N][M] == 1:
                dfs(N, M)
                cnt += 1
    
    print(cnt)


                
    
