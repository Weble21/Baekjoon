t = int(input())
for i in range(0,t):
    print("Ww")
    arr = input().split()
    n = int(arr[0])
    m = int(arr[1])
    n_set = set()
    cnt = 0
    for j in range(0,m):
        print("?")
        m_arr = input().split()
        if m_arr[0] not in n_set:
            n_set.add(m_arr[0])
            n_set.add(m_arr[1])
            print(n_set)
            cnt += 1
        else:
            if m_arr[1] in n_set:
                print(n_set)
                continue
            else:
                n_set.add(m_arr[1])
                cnt += 1
        print(n_set, cnt)
    print(cnt)
            
