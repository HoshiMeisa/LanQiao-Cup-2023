def f(n):
    if n <= 2:
        return 1
    else:
        return f(n - 1) + f(n - 2)


def isEven(n):
    if n % 2 != 0:
        return True
    else:
        return False


answer = 0
for i in range(1, 400):
    if isEven(f(i)):
        answer += f(i)


print(answer)
