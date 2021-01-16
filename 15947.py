N = int(input())
q = N // 14
r = N % 14 
arr = [ ["sukhwan",False],["baby",False],["sukhwan",False],["tururu",True],["turu",True],["very",False], ["cute",False],["tururu",True], ["turu",True],["in",False], ["bed",False], ["tururu",True] ,["turu",True],["baby",False]]
if(arr[r][1]==False):
    print(arr[r][0])
else:
    rtn = arr[r][0]
    ruNum = int((len(rtn) - 2)/2)
    if (ruNum+q) < 5:
        for i in range(0,q) :
            rtn += "ru"
        print(rtn)
    else:
        q+=ruNum
        print("tu+ru*%d"%q) 
