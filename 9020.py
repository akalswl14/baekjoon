T = int(input())
numArr = []
maxNum = 2
primeArr = [0,0]
for i in range(T):
    n = int(input())
    numArr.append(n)
    if(maxNum < n):
        maxNum = n
for i in range(2,maxNum):
    primeArr.append(i)
for i in range(2,maxNum):
    if(primeArr[i]==0):
        continue
    for j in range(i+i,maxNum,i):
        primeArr[j] = 0
for i in range(T):
    n = numArr[i]
    for j in range(n//2,1,-1):
        x = j
        y = n-x
        if(primeArr[x]!=0 and primeArr[y]!=0):
            print(x,y)
            break
