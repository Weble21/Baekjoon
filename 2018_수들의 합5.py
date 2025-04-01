n = int(input())
cnt = 0
start = 1
sum = 0
for i in range(1, n+1):
    end = i
    sum += end
    while sum >= n :
        if sum == n :
            cnt += 1
        sum -= start
        start += 1
        
print(cnt)
        
   
