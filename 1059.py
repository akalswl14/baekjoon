s = int(input())
inp = [int(x) for x in input().strip().split()]
n = int(input())
if(n in inp):
    print(0)
else:
    inp.append(n)
    inp.sort()
    idx = inp.index(n)
    if(idx != 0):
        before = inp[idx-1] +1
    else:
        before = 1
    if(idx+1 == len(inp)):
        after = 1000
    else:
        after = inp[idx+1] -1
    rtn = 0
    for i in range(before,n+1):
        if(i<n-1):
            rtn += after - n + 1
        else:
            rtn += after - i
    print(rtn)
