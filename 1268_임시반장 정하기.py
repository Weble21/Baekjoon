n = int(input())
arr = [[0] * 5 for _ in range(n)]
for i in range (n):
    arr_2 = input().split()
    arr_2 = list(map(int, arr_2))
    for j in range(0, 5) :
        arr[i][j] = arr_2[j]

res = [0] * n
for i in range(n):
    cnt = 0
    for j in range(n):
        if i == j:
            continue
        else:
            for k in range(5):
                if arr[i][k] == arr[j][k]:
                    cnt += 1
                    break
    res[i] = cnt

max_index = res.index(max(res))
print(max_index+1)
    
