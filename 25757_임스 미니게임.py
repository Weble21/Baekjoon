import sys

n_list = input().split()
n = int(n_list[0])
game = n_list[1]
res = 0
player = set()
for i in range(0, n):
    player.add(input())

size = len(player)
if(game == 'Y'):
    res = size
elif(game == 'F'):
    res = size // 2
else:
    res = size // 3
print(res)
    
    
