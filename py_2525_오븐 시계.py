import sys

h, m = map(int, sys.stdin.readline().split())
u = int(input())

m = m+u

while m >= 60 :
    h += 1
    m -= 60
    if h >= 24 :
        h -= 24

print(h, m)

