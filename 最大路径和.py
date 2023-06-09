def max_path_sum(M):
    n, m = map(int, input().split())

    if not M or not M[0]:
        return 0, []

    dp = [[0] * n for _ in range(m)]

    # 初始化
    dp[0][0] = M[0][0]
    for i in range(n):
        dp[i][0] = dp[i - 1][0] + M[i][0]
    for j in range(n):
        dp[0][j] = dp[0][j - 1] + M[0][j]


