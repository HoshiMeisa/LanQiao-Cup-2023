import math


def isPrime(n):
    for i in range(int(math.sqrt(n))):
        if n % i == 0:
            return 0
    return 1


a, b = map(int, input().split())

for i in range(a, b):
    if str(i) == reverse(str(i)):
        continue
    else:
        if isPrime(int(i)):
            print(i)
        else:
            continue

