# 质因数分解

def prime_factors(n):
    factors = []

    while n % 2 == 0:
        factors.append(2)
        n //= 2

    for i in range(3, int(n ** 0.5) + 1, 2):
        while n % i == 0:
            factors.append(i)
            n = n // i

    if n > 2:
        factors.append(n)

    return list(factors)


a, b = map(int, input().split())

for i in range(a, b + 1):
    factor = prime_factors(i)

    print(f"{i}=", end="")
    for j in range(len(factor)):
        print(f"{factor[j]}", end="")

        if j != len(factor) - 1:
            print("*", end="")

    print()
