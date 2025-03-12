import sys
input = sys.stdin.readline

res = []
#n카드 받기
n = int(input())
input_list = input().split()
n_set=set(input_list)
#m카드 받기
m = int(input())
m_list = input().split()
for i in range(0, m-1):
    if m_list[i] in n_set:
        print(1, end=" ")
    else:
        print(0, end=" ")
if m_list[m-1] in n_set:
    print(1)
else:
    print(0)
