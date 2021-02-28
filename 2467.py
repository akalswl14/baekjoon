import sys

input = sys.stdin.readline
N = int(input())
arr = [int(x) for x in input().strip().split()]
absArr = sorted(arr, key=lambda x: abs(x))
minSum = -1
pair = [0, 0]
for i in range(N - 1):
    absSum = abs(absArr[i] + absArr[i + 1])
    if minSum == -1 or absSum <= minSum:
        minSum = absSum
        pair = [absArr[i], absArr[i + 1]]
pair.sort()
print(pair[0], pair[1])
