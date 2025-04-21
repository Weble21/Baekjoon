n = int(input())
arr =  list(map(int, input().split()))

res = [1] * (n+1)

for i in range(1, n):
    for j in range(0, i):
        if(arr[j] < arr[i]):
            res[i] = max(res[i], res[j]+1)

#print(res)
print(max(res))
