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
    def clear(self):
        self.items = []

n = int(input())
tmp = input()
cnt = 0
s_1 = stack()
s_2 = stack()
for i in range(0, n):
    if(tmp[i] == 'L'):
        s_1.push(tmp[i])
        
    elif(tmp[i] == 'R'):
        if(s_1.top() == 'L'):
            s_1.pop()
            cnt += 1
        else:
            break;
            
    elif(tmp[i] == 'S'):
        s_2.push(tmp[i])
        
    elif(tmp[i] == 'K'):
        if(s_2.top() == 'S'):
            s_2.pop()
            cnt += 1
        else:
            break;
            
    else:
        cnt += 1

print(cnt)
        
    
        
        
    
