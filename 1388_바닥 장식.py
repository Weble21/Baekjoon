import sys

tmp = input().split()
n = int(tmp[0])
m = int(tmp[1])
arr = []
for _ in range(0,n):
    arr.append(list(input()))

#x가 세로, y가 가로
def dfs(x, y):
    if arr[x][y] == "-":
        arr[x][y] = 1
        for i in [1, -1]:
            _y = y+i
            if (_y >= 0 and _y < m) and arr[x][_y] == "-":
                dfs(x, _y)

    elif arr[x][y] == "|":
        arr[x][y] = 1
        for j in [1, -1]:
            _x = x+j
            if (_x >= 0 and _x < n) and arr[_x][y] == "|" :
                dfs(_x, y)

cnt = 0
  
for _i in range(0, n):
    for _j in range(0, m):
        if arr[_i][_j] != 1:
            dfs(_i,_j)
            cnt += 1
print(cnt)
