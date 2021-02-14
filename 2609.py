def GCD(a, b):
    if b == 0:
        return a
    return GCD(b, a % b)


def LCM(a, b, gcd):
    return (a * b) // gcd


x, y = map(int, input().split())
gcd = GCD(x, y)
print(gcd)
lcm = LCM(x, y, gcd)
print(lcm)
