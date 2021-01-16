numArr = [int(x) for x in input().strip().split()]
alpString = input()
numArr.sort()
a = numArr[0]
b = numArr[1]
c = numArr[2]
for i in alpString:
    if(i=="A"):
        print(a,end="")
    elif(i=="B"):
        print(b,end="")
    else:
        print(c,end="")
    if(i!=alpString[len(alpString)-1]):
        print("",end=" ")
    else:
        print()
