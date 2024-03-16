import sys

total = int(input())
n = int(input())
s = 0

for i in range(n) :
    a,b = map(int, sys.stdin.readline().split())
    s += (a*b)
if s == total :
    print('Yes')
else :
    print('No')

