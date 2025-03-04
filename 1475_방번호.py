arr = [0,1,2,3,4,5,6,7,8,9]
t = input()
l = len(t)
cnt = 1
for i in range(0, l) :
    a = int(t[i])
    if a in arr:
        arr.remove(a)
    else:
        if(a == 6 or a == 9):
            if(a == 6) :
                if 9 in arr:
                    arr.remove(9)
                else:
                    cnt += 1
                    arr.extend((0,1,2,3,4,5,6,7,8,9))
                    arr.remove(a)
            else:
                if 6 in arr:
                    arr.remove(6)
                else:
                    cnt += 1
                    arr.extend((0,1,2,3,4,5,6,7,8,9))
                    arr.remove(a)
        else:
            cnt += 1
            arr.extend((0,1,2,3,4,5,6,7,8,9))
            arr.remove(a)
print(cnt)    
