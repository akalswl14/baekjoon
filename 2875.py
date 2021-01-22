numArr = [int(x) for x in input().strip().split()]
N = numArr[0]
M = numArr[1]
K = numArr[2]
teamNum = 0
while N + M >= K and N >= 0 and M >= 0:
    N -= 2
    M -= 1
    teamNum += 1
print(teamNum - 1)
