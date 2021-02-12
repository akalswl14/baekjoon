import sys

input = sys.stdin.readline
N = int(input())
arr = [int(x) for x in input().strip().split()]
x = arr[0]
for i in range(1, N):
    y = arr[i]
    if x > y:
        p = x
        q = y
    else:
        p = y
        q = x
    gcd = 1
    while True:
        if q == 0:
            gcd = p
            break
        p, q = q, p % q
    print("%d/%d" % (x // gcd, y // gcd))
