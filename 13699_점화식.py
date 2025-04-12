n = int(input())
arr = [0] * (n+1)
arr[0] = 1
for i in range(1, n+1):
    tmp = 0
    for j in range(0, i):
        tmp += arr[j]*arr[i-j-1]
    arr[i] = tmp    

print(arr)
    
