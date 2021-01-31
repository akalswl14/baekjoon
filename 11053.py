N = int(input())
arr = [int(x) for x in input().strip().split()]
dp = [0 for i in range(N)]
for i in range(N):
    maxNum = 0
    for j in range(i):
        if(arr[j]<arr[i]):
            maxNum = max(maxNum,dp[j])
    dp[i] = maxNum +1
print(max(dp))
