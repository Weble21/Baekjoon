import sys

def pow(n):
    return n * n

n = int(input())
arr = [0] * (n+1)
arr[1] = 1
for i in range(2, n+1):
    j = 1
    arr[i] = i
    while (pow(j) <= i):
        arr[i] = min(arr[i-pow(j)] + 1, arr[i])
        j += 1
        
print(arr[n])
