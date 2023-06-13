# F
# 深度优先搜索（DFS）动态规划（DP）
from collections import defaultdict


def dfs(tree, weights, node, parent=None):
    dp = {0: weights[node]}

    for child in tree[node]:
        if child == parent:
            continue

        child_dp = dfs(tree, weights, child, node)

        new_dp = defaultdict(int)
        for d1, w1 in dp.items():
            for d2, w2 in child_dp.items():
                if d1 != d2 and d1 + 1 != d2 and d2 + 1 != d1:
                    new_dp[d1 + 1] = max(new_dp[d1 + 1], w1 + w2)

        for d, w in new_dp.items():
            dp[d] = max(dp.get(d, 0), w)

    return dp

def max_weight_sum(n, parents, weights):
    tree = defaultdict(list)
    for i, p in enumerate(parents, 2):
        tree[p].append(i)
        tree[i].append(p)

    dp = dfs(tree, weights, 1)

    return max(dp.values())

if __name__ == "__main__":
    n = int(input().strip())
    parents = list(map(int, input().split()))
    weights = list(map(int, input().split()))

    result = max_weight_sum(n, parents, weights)
    print(result)
