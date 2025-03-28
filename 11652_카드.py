map = dict()

n = int(input())

for i in range(0,n):
    tmp = int(input())
    if tmp in map:
        map[tmp]+=1
    else:
        map[tmp] = 1

max_value = max(map.values())
max_key = []
#map 전체를 탐색
for key in map:
    if map[key] == max_value:
        max_key.append(key)
print(min(max_key))
