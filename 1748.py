n = int(input())
digit = 0
if n >= 1 and n < 10:
    digit += n
else:
    digit += 9
    if n >= 10 and n < 100:
        digit += (n - 9) * 2
    else:
        digit += 90 * 2
        if n >= 100 and n < 1000:
            digit += (n - 99) * 3
        else:
            digit += 900 * 3
            if n >= 1000 and n < 10000:
                digit += (n - 999) * 4
            else:
                digit += 9000 * 4
                if n >= 10000 and n < 100000:
                    digit += (n - 9999) * 5
                else:
                    digit += 90000 * 5
                    if n >= 100000 and n < 1000000:
                        digit += (n - 99999) * 6
                    else:
                        digit += 900000 * 6
                        if n >= 1000000 and n < 10000000:
                            digit += (n - 999999) * 7
                        else:
                            digit += 9000000 * 7
                            if n >= 10000000 and n < 100000000:
                                digit += (n - 9999999) * 8
                            else:
                                digit += 90000000 * 8
                                digit += 9
print(digit)
