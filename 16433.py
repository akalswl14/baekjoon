inp = [int(x) for x in input().strip().split()]
N = inp[0]
R = inp[1] - 1
C = inp[2] - 1
arr = []
OddToEven = 0 #홀수 row에서 짝수 col일때 당근이 있는가?
if(C%2==0):#x값이 짝수
    if(R%2==0) : #y값이 짝수
        OddToEven = 0
    else :
        OddToEven = 1
else:
    if(R%2==0) : #y값이 짝수
        OddToEven = 1
    else :
        OddToEven = 0
for i in range(0,inp[0]):
    arr.append([])
    for j in range(0,inp[0]):
        if(i%2==1): #홀수에서
            if(j%2==0): #짝수일때
                if(OddToEven==1):
                    print("v",end="")
                else:
                    print(".",end="")
            else: #홀수일때
                if(OddToEven==0):
                    print("v",end="")
                else:
                    print(".",end="")
        else: #짝수에서
            if(j%2==1): #홀수일떄
                if(OddToEven==1):
                    print("v",end="")
                else: #짝수일때
                    print(".",end="")
            else: #짝수일때
                if(OddToEven==0):
                    print("v",end="")
                else:
                    print(".",end="")
    print("")
