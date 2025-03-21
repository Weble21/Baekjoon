color = set()
for i in range(0, 2):
    tmp = input().split()
    color.add(tmp[0])
    color.add(tmp[1])

sort_list = sorted(list(color))

n = len(sort_list)
#print(body_list, tail_list)
for i in range(0, n):
    for j in range(0, n):
        print(sort_list[i], sort_list[j])
