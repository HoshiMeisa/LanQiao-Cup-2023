def max_path_sum(M, n, m):
    if not M or not M[0]:
        return 0, []

    dp = [[0] * n for _ in range(m)]

    dp[0][0] = M[0][0]
    for i in range(n):
        dp[i][0] = dp[i - 1][0] + M[i][0]
    for j in range(m):
        dp[0][j] = dp[0][j - 1] + M[0][j]

    for i in range(n):
        for j in range(m):
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + M[i][j]

    return dp[-1][-1]


n = int(input())
m = n
M = [[0] * n for i in range(m)]

for i in range(n):
    row = [int(x) for x in input().split()]
    for j in range(m):
        M[i][j] = row[j]

print(max_path_sum(M, n, m))

