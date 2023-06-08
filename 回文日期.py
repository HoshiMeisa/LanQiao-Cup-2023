import os
import sys


def is_leapyear(y):
    if (y % 4 == 0 and y % 100 != 0) or y % 400 == 0:
        return True
    return False


def is_valid_date(N):
    month = (N % 10000) // 100
    if not (1 <= month <= 12):
        return False

    year = N // 10000
    day = N % 100
    D = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    if is_leapyear(year):
        D[2] = 29

    if not(1 <= day <= D[month]):
        return False

    return True


N = int(input())

found1 = 0
found2 = 0

for i in range(N + 1, 99999999):
    if str(i) == str(i)[::-1] and is_valid_date(i):
        if not found1:
            print(i)
            found1 = 1

    if str(i)[0:2] == str(i)[2:4] == str(i)[5:3:-1] == str(i)[7:5:-1] and is_valid_date(i):
        if not found2:
            print(i)
            found2 = 1

    if found1 and found2:
        break
