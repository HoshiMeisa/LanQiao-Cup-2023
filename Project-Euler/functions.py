def is_prime(n):
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True


def is_palindrome(n):
    n = str(n)
    if n == n[::-1]:
        return True
    return False


def prime_factors(n):
    factors = set()

    # First, let's divide by 2 to find the symbolist prime 2.
    while n % 2 == 0:
        factors.add(2)
        n //= 2

    # Then, we just need to find all inte numbers.
    for i in range(3, int(n ** 0.5) + 1, 2):
        if n % i == 0:
            factors.add(i)
            n = n // i

    # If the rest is larger than 2, add it into the factors.
    if n > 2:
        factors.add(n)

    return factors


def factors(n):
    result = set()
    for i in range(1, int(n ** 0.5) + 1):
        if n % i == 0:
            result.add(i)
            result.add(n // i)
    result.remove(n)
    return result

