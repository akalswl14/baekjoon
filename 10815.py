import sys

input = sys.stdin.readline
N = int(input())
arr = [int(x) for x in input().strip().split()]
maxNum = max(arr)
minNum = min(arr)
plusArr = ["0" for i in range(maxNum + 1)]
minusArr = ["0" for i in range(abs(minNum) + 1)]
for i in arr:
    target = i
    if target >= 0:
        plusArr[target] = "1"
    else:
        minusArr[abs(target)] = "1"
M = int(input())
arr = input().strip().split()
rtn = []
for i in arr:
    target = int(i)
    if target > maxNum or target < minNum:
        rtn.append("0")
    elif target >= 0:
        rtn.append(plusArr[target])
    else:
        rtn.append(minusArr[abs(target)])
print(" ".join(rtn))
