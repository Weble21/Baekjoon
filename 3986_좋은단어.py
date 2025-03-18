import sys
input = sys.stdin.readline

class stack:
    def __init__(self):
        self.items = []
    def push(self, data):
        self.items.append(data)
    def pop(self):
        if self.isEmpty():
            return None
        else:
            return self.items.pop()
    def top(self):
        if self.isEmpty():
            return None
        else:
            return self.items[-1]
    def isEmpty(self):
        return len(self.items) == 0
            
n = int(input())
cnt = 0

for i in range(0, n):
    s = stack()
    my_str = input().strip()
    s.push(my_str[0])
    for j in range(1,len(my_str)):
        if(my_str[j] == s.top()):
            s.pop()
        else:
            s.push(my_str[j])
    if(s.isEmpty()):
        cnt += 1
    
print(cnt)
