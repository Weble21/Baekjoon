import itertools

n = int(input())
k = int(input())
tmp = []
for i in range(0, n):
    tmp.append(input())
result = set(map(''.join, itertools.permutations(tmp, k)))

print(len(result))
