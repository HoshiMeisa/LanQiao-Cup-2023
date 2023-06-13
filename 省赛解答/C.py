# C
# 动态规划
def max_loose_subsequence_value(s):
    n = len(s)
    dp = [0] * n    # 用于储当前位置 i 的最大松散子序列价值
    max_value = 0   # 用于记录遍历过程中的最大松散子序列价值

    for i in range(n):
        value = ord(s[i]) - ord('a') + 1   # 计算价值
        dp[i] = value
        for j in range(i - 2, -1, -1):
            dp[i] = max(dp[i], dp[j] + value)
        max_value = max(max_value, dp[i])

    return max_value


if __name__ == "__main__":
    s = input().strip()
    result = max_loose_subsequence_value(s)
    print(result)
