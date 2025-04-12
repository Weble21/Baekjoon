n = int(input())
arr = []
res = [0] * (n+1)
arr.append(0)
for i in range(0, n):
    arr.append(int(input()))

if n == 1:
    res[1] = arr[1]
    
elif n == 2:
    res[2] = arr[1]+arr[2]
    
else:
    res[1] = arr[1]
    res[2] = arr[1]+arr[2]
    for i in range(3, n+1):
        res[i] = max(res[i-3] + arr[i-1] + arr[i], res[i-2] + arr[i])
print(res[n])
    
