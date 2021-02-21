import sys

input = sys.stdin.readline
K = int(input())
for i in range(K):
    print("Class", (i + 1))
    arr = [int(x) for x in input().strip().split()]
    N = arr[0]
    del arr[0]
    arr = sorted(arr)
    maxNum = arr[-1]
    minNum = arr[0]
    maxGap = 0
    for j in range(N - 1):
        maxGap = max(maxGap, arr[j + 1] - arr[j])
    rtn = f"Max {maxNum}, Min {minNum}, Largest gap {maxGap}"
    print(rtn)
