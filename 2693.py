import sys

input = sys.stdin.readline
T = int(input())
for i in range(T):
    arr = [int(x) for x in input().strip().split()]
    arr.sort()
    print(arr[-3])
