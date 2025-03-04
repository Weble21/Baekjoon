import sys
input = sys.stdin.readline

while True:
    cnt = 0
    n_set = set()
    a_list = input().split()
    n, m = map(int, a_list)
    if(n == 0 or m == 0):
        break;
    for i in range(n):
        tmp = int(input())
        n_set.add(tmp)
    for i in range(m):
        tmp = int(input())
        if tmp in n_set:
            cnt += 1
        else:
            continue
    print(cnt)
