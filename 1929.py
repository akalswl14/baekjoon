numArr = [int(x) for x in input().strip().split()]
N = numArr[0]
M = numArr[1]
arr = [0,0]
for i in range(2,M+1):
    arr.append(i)
for i in range(2,M+1):
    if(arr[i]==0):
        continue
    for j in range(i+i,M+1,i):
    	arr[j] = 0
for i in arr:
    if(i==0):
        continue
    if(i>=N and i <= M):
        print(i)
