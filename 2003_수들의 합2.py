tmp = input().split()
n = int(tmp[0])
m = int(tmp[1])
list_tmp = input().split()
arr = list(map(int, list_tmp))
sum = 0
cnt = 0
start = 0
for i in range(0, n):
    end = i
    sum += arr[end]
    while sum >= m :
        if sum == m :
            cnt += 1
        sum -= arr[start]
        start += 1

print(cnt)
    
            
    
    
