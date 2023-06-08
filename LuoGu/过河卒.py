def solve():
    dp = [[1 for _ in range(yb+1)] for __ in range(xb+1)]

    for i in range(xb+1):
        for j in range(yb+1):
            if is_unreachable((i, j)):
                dp[i][j] = 0
            elif i > 0 and j > 0:
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1]
            elif i > 0:
                dp[i][j] = dp[i - 1][j]
            elif j > 0:
                dp[i][j] = dp[i][j - 1]

    print()
    return dp[-1][-1]


def is_unreachable(P):
    for p in points:
        if p == P:
            return True
    return False


def move_point(x, y, dx, dy):
    return x + dx, y + dy


xb, yb, xh, yh = map(int, input().split())

steps = [(2, 1), (1, 2), (-1, 2), (-2, 1), (-2, -1), (-1, -2), (1, -2), (2, -1)]

points = [move_point(xh, yh, dx, dy) for dx, dy in steps]

print(solve())

# 愛しい日々
# ATRI
# My Dear Moments
