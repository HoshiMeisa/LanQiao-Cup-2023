def display(M):
    n = len(M)
    m = len(M[0])
    for i in range(n):
        for j in range(m):
            print(M[i][j], end=" ")
        print()


m, n = map(int, input().split())

A = [[0 for _ in range(m)] for __ in range(n)]


for i in range(m):
    line = [int(x) for x in input().split()]
    for j in range(n):
        A[i][j] = line[j]

answer = []
for i in range(n):
    for j in range(m):
        if i < n - 1 and j < m - 1:
            answer.append(A[i][j])
        else:
            n -= 1

