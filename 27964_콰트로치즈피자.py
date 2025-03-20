import sys

n = int(input())
cheese_set = set()
str_list = input().split()
cheese_list = ['C', 'h', 'e', 'e', 's', 'e']
#print(str_list)
for i in range(0, n):
    l = int(len(str_list[i]))
    #print(l)
    #print(str_list[i])
    if(l>5):
        tmp_list = []
        for j in range(l-6, l):
            tmp_list.append(str_list[i][j])
        #print('tmp: ', tmp_list)
        if(tmp_list == cheese_list):
            cheese_set.add(str_list[i])

#print(cheese_set)
result_len = len(cheese_set)
if(result_len >= 4):
    print('yummy')
else:
    print('sad')
