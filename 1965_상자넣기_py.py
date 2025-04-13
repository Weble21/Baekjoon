import sys

n = int(input())
tmp = input().split()
arr = []
for i in range(0, n):
    arr.append(int(tmp[i]))
res = [1] * (n)
for i in range(1, n):
    for j in range(0, i):
        if arr[i] > arr[j]:
            res[i] = max(res[i], res[j]+1)
print(max(res))
        




