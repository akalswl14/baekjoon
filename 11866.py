numArr = [int(x) for x in input().strip().split()]
N = numArr[0]
K = numArr[1]
A = []
B = []
rtn = []
for i in range(1,N+1):
    B.append(i)
while len(rtn) != N :
    B.extend(A)
    A = []
    for i in range(0,K):
        if(len(B)==0):
            B.extend(A)
            A = []
        if(i<K-1):
            A.append(B[0])
        else:
            rtn.append(B[0])
        del B[0]
print("<",end="")
for i in rtn:
	if(i==rtn[len(rtn)-1]):
		print(i,end="")
	else:
		print(i,end=", ")
print(">")
