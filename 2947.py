import sys

input = sys.stdin.readline
arr = [x for x in input().strip().split()]
for i in range(5):
    for j in range(1, 5):
        if arr[j] < arr[j - 1]:
            arr[j], arr[j - 1] = arr[j - 1], arr[j]
            print(" ".join(arr))
