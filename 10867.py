import sys

input = sys.stdin.readline
N = int(input())
arr = [int(x) for x in input().strip().split()]
arr = sorted(arr)
before = 0
rtn = []
for i in arr:
    if before != i:
        rtn.append(str(i))
        before = i
print(" ".join(rtn))
