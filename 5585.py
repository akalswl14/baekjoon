remain = 1000 - int(input())
rtn = 0
while(remain > 0):
    target = 1
    if(remain>=500):
        target = 500
    elif(remain>=100):
        target = 100
    elif(remain>=50):
        target = 50
    elif(remain>=10):
        target = 10
    elif(remain>=5):
        target = 5
    elif(remain>=1):
        rtn += remain
        remain = 0
        continue
    rtn += remain//target
    remain %= target
print(rtn)
