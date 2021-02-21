import sys

def cutRow(inputArr, cutSpot):
    rtnArr = []
    maxSize = 0
    for i in inputArr:
        startRow, startCol, endRow, endCol, x, y, size = i
        if cutSpot > startRow and cutSpot < endRow:
            splitedSize = (cutSpot - startRow) * y
            splited1 = [
                startRow,
                startCol,
                cutSpot,
                endCol,
                cutSpot - startRow,
                y,
                splitedSize,
            ]
            maxSize = max(maxSize, splitedSize)
            splitedSize = (endRow - cutSpot) * y
            splited2 = [
                cutSpot,
                startCol,
                endRow,
                endCol,
                endRow - cutSpot,
                y,
                splitedSize,
            ]
            maxSize = max(maxSize, splitedSize)
            rtnArr.append(splited1)
            rtnArr.append(splited2)
        else:
            rtnArr.append(i)
            maxSize = max(maxSize, size)
    return [rtnArr, maxSize]


def cutCol(inputArr, cutSpot):
    rtnArr = []
    maxSize = 0
    for i in inputArr:
        startRow, startCol, endRow, endCol, x, y, size = i
        if cutSpot > startCol and cutSpot < endCol:
            splitedSize = (cutSpot - startCol) * x
            splited1 = [
                startRow,
                startCol,
                endRow,
                cutSpot,
                x,
                cutSpot - startCol,
                splitedSize,
            ]
            maxSize = max(maxSize, splitedSize)
            splitedSize = (endCol - cutSpot) * x
            splited2 = [
                startRow,
                cutSpot,
                endRow,
                endCol,
                x,
                endCol - cutSpot,
                splitedSize,
            ]
            maxSize = max(maxSize, splitedSize)
            rtnArr.append(splited1)
            rtnArr.append(splited2)
        else:
            rtnArr.append(i)
            maxSize = max(maxSize, size)
    return [rtnArr, maxSize]


input = sys.stdin.readline
row, col = map(int, input().split())
N = int(input())
papers = [[0, 0, row, col, row, col, row * col]]
maxSize = 0
for i in range(N):
    x, y = map(int, input().split())
    if x == 1:
        papers, maxSize = cutRow(papers, y)
    else:
        papers, maxSize = cutCol(papers, y)
print(maxSize)
