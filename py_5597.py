arr = [i for i in range(1,31)]
for i in range (28):
    p = int(input())
    arr.remove(p)

print(min(arr))
print(max(arr))
