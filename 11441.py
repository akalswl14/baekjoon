import sys

input = sys.stdin.readline
N = int(input())
arr = [int(x) for x in input().strip().split()]
sArr = [0]
arrSum = 0
for i in range(N):
    arrSum += arr[i]
    sArr.append(arrSum)
M = int(input())
for i in range(M):
    section = [int(x) for x in input().strip().split()]
    rtn = sArr[section[1]] - sArr[section[0] - 1]
    print(rtn)
