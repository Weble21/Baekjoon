import sys
input = sys.stdin.readline

n = int(input())
arr = []
arr.append(0)
arr.append(1)
if n > 2:
    arr.append(1)
    for i in range(3, n+1):
        tmp = arr[i-1] + arr[i-2]
        arr.append(tmp)
    print(arr[n])
else :
    print(1)
