# 给定一个N阶矩阵A，输出A的M次幂（M是非负整数）

# 1 2
# 3 4

# 5 6
# 7 8


def multiply(A, B):
    n = len(A)
    result = [[0 for _ in range(n)] for __ in range(n)]

    for i in range(n):
        for j in range(n):
            for k in range(n):
                result[i][j] += int(A[i][k]) * int(B[k][j])

    return result


def display_matrix(M):
    n = len(M)

    for i in range(n):
        for j in range(n):
            print(M[i][j], end=" ")
        print()


def display_unit(n):
    for i in range(n):
        for j in range(n):
            if j == i:
                print("1", end=" ")
            else:
                print("0", end=" ")
        print()


n, m = map(int, input().split())
M = [[0 for _ in range(n)] for __ in range(n)]

for i in range(n):
    line = input().split()
    for j in range(n):
        M[i][j] = line[j]


def solve(M, n, m):
    if m == 0:
        display_unit(len(M))
        return
    elif m == 1:
        display_matrix(M)
        return
    elif m == 2:
        display_matrix(multiply(M, M))
        return

    answer = multiply(M, M)
    for _ in range(m - 2):
        answer = multiply(answer, M)

    display_matrix(answer)
    return


solve(M, n, m)