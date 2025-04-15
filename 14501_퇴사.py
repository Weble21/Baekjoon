n = int(input())
T = [0] * (n+2)
P = [0] * (n+2)
for _ in range(1, n+1):
    T[_], P[_] = map(int, input().split())

res = [0] * (n+2)

for i in range(1,n+1):
    res[i+1] = max(res[i+1], res[i])

    if(i+T[i] <= n+1):
        res[i+T[i]] = max(res[i+T[i]], res[i] + P[i])
print(res)
        
