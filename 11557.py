import sys

input = sys.stdin.readline
T = int(input())
for i in range(T):
    N = int(input())
    school = ""
    maxCup = -1
    for j in range(N):
        arr = [x for x in input().strip().split()]
        cup = int(arr[1])
        if cup > maxCup:
            maxCup = cup
            school = arr[0]
    print(school)
