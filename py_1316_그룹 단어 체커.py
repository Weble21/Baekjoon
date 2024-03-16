#이전 단어 / 현재 단어 / 사용한 단어
#이전 단어 == 현재 단어 -> ok
#이전 단어 =! 현재 단어 -> 사용한 단어에 현재 단어가 있으면 no

n = int(input())
result = n
for i in range(n) :
    arr = input().strip()
    
    if len(arr) == 1:
        continue
    else:
        backWord = ''
        currentWord = ''
        usedWord = []
        for i in range(len(arr)) :   
            if i == 0:
                backWord = arr[i]
                usedWord.append(arr[i])
            else :
                currentWord = arr[i]
                if backWord != currentWord:
                    if currentWord in usedWord:
                        result -= 1
                        break;
                    else:
                        backWord = arr[i]
                        usedWord.append(arr[i])
            
print(result)

                
                
        
