import sys
input = sys.stdin.readline

n = int(input())
arr = [0] * (n+1)
arr[1] = 1
if n > 2:
    arr[2] = 1
    for i in range(3, n+1):
        arr[i] = arr[i-1] + arr[i-2]
    print(arr[n])
else :
    print(1)
