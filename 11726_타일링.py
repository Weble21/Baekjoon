n = int(input())
arr = [1] * n
for i in range(1, n):
    arr[i] = (arr[i-1] + arr[i-2]) % 10007
print(arr[n-1])
