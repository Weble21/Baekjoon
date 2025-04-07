n = int(input())
arr = []
cnt = 0
arr.append(0)
arr.append(1)
arr.append(2)
arr.append(3)
if n > 3:
    for i in range (4, n+1):
        new_arr = arr[i-2] + arr[i-1]
        arr.append(new_arr%15746)
    cnt = arr[n]
    print(cnt % 15746)
else:
    cnt = arr[n]
    print(cnt % 15746)
        
