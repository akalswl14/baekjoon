N = input()
inp = [int(x) for x in input().strip().split()]
inp.sort()
for i in inp:
    if(i==inp[len(inp)-1]):
        print(i)
    else:
        print(i,end=" ")
