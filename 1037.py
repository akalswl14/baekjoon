T = int(input())
arr = [int(x) for x in input().strip().split()]
arr = sorted(arr)
print(arr[0] * arr[-1])
