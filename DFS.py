def combination_sum(nums, target):
    def dfs(start, path, cur_sum):
        # 下面针对每次搜索完的时候
        # 如果当前和等于目标值，说明当前路径就是目标路径，可以添加到结果中返回
        if cur_sum == target:
            result.append(path[:])
            return
        # 如果已经超出，说明此路径不是目标路径
        if cur_sum > target:
            return

        # 如果还不足，继续进行搜索
        for i in range(start, len(nums)):
            path.append(nums[i])    # 将当前数字添加到路径中
            dfs(i, path, cur_sum + nums[i])     # 调用递归进行搜索，搜索范围从i开始，总合是当前的总和加上当前搜索到的数字
            path.pop()      # 移除最后添加的节点，回溯到上一个节点，尝试其他可能的路径

    result = []     # 初始化结果列表
    dfs(0, [], 0)   # 开始搜索
    return result   # 返回搜索结果


def combination_sum(nums, target):
    def DFS(start, path, cur_num):
        if cur_num == target:
            result.append(path[:])
            return

        if cur_num > target:
            return

        for i in range(start, len(nums)):
            


    result = []


_nums = [2, 3, 6, 7]
_target = 7
print(combination_sum(_nums, _target))
