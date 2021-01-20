N = input()
inp = [int(x) for x in input().strip().split()]
inp.sort()
before = 0
rtn = 0
for i in inp:
    before += i
    rtn += before
print(rtn)
