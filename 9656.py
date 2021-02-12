N = int(input())
while N >= 0:
    if N == 0 or N == 2:
        print("SK")
        break
    elif N == 1 or N == 3:
        print("CY")
        break
    else:
        N -= 3
        if N == 2:
            print("CY")
            break
        elif N == 1 or N == 3:
            print("SK")
            break
        else:
            N -= 3
