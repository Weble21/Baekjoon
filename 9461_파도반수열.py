t = int(input())
arr = [1] * (101)
for i in range(4, 7):
    arr[i] = arr[i-3] + arr[i-2]
    

for i in range(7, 101):
    arr[i] = arr[i-1] + arr[i-5]
    
for _ in range(0, t):
    n = int(input())
    print(arr[n])
    
