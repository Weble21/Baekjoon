import sys
input = sys.stdin.readline

s_list = set()
a_list = []
n = int(input())
for i in range(0, n) :
    a_list = input().split()
    if(a_list[1] == 'enter'):
        s_list.add(a_list[0])
    elif(a_list[1] == 'leave'):
        s_list.remove(a_list[0])
    else:
        print('err')

l_list = list(s_list)
l_list.sort(reverse=True)
l = len(l_list)
for i in range(0, l):
    print(l_list[i])
