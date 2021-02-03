T = int(input())
for i in range(T):
    n = int(input())
    arr = [0] * (2*n)
    dp = [0] * (2*n)
    cursor = 0
    row = [int(x) for x in input().strip().split()]
    for j in range(n):
        arr[2*j] = row[j]
    row = [int(x) for x in input().strip().split()]
    for j in range(n):
        arr[2*j+1] = row[j]
    dp[0] = arr[0]
    dp[1] = arr[1]
    if(n>=2):
        dp[2] = dp[1] + arr[2]
        dp[3] = dp[0] + arr[3]
        if(n>=3):
            for j in range(4,2*n):
                if(j%2 == 0):
                    val1 = dp[j-1] + arr[j]
                    val2 = dp[j-3] + arr[j]
                else:
                    val1 = dp[j-3] + arr[j]
                    val2 = dp[j-5] + arr[j]
                maxNum = max(val1,val2)
                dp[j] = maxNum
    rtnNum = max(dp[-1],dp[-2])
    print(rtnNum)
