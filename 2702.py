import sys

input = sys.stdin.readline


def gcd(x, y):
    if x % y == 0:
        return y
    else:
        return gcd(y, x % y)


def lcd(x, y, g):
    return x * y // g


T = int(input())
for i in range(T):
    arr = [int(x) for x in input().strip().split()]
    gcdNum = gcd(arr[0], arr[1])
    print(lcd(arr[0], arr[1], gcdNum), gcdNum)
