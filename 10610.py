N = input()
numArray = []
isZeroExists = False
sum = 0
for i in range(0,len(N)):
    n = int(N[i])
    numArray.append(n)
    sum += n
    if(n==0):
        isZeroExists = True
if(isZeroExists==False or sum % 3 != 0):
	print(-1)
else:
	numArray.sort(reverse=True)
	rtnStr = ""
	for i in numArray:
		rtnStr += str(i)
	print(rtnStr)
