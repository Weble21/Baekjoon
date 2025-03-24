num = input().split()
n = int(num[0])
m = int(num[1])

res = set()
n_list = input().split()
m_list = input().split()
for i in range(0,n):
    res.add(n_list[i])
for i in range(0,m):
    if m_list[i] in res:
        res.remove(m_list[i])
    else:
        res.add(m_list[i])

print(len(res))
