N = int(input())
steps = [0]
sumArr = [0]
for i in range(N):
    steps.append(int(input()))
    sumArr.append(0)
sumArr[1] = steps[1]
if(N>=2):
    sumArr[2] = max(steps[2],steps[1]+steps[2])
if(N>=3):
    sumArr[3] = max(steps[3]+steps[2],steps[3]+sumArr[1])
if(N>=4):
    for i in range(4,N+1):
        sumArr[i] = max(steps[i]+steps[i-1]+sumArr[i-3],steps[i]+sumArr[i-2])
print(sumArr[N])
