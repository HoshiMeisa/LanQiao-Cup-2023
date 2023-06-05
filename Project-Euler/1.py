def combination_sum(nums, target):
    def DFS(start, path, current_sum):
        if current_sum == target:
            result.append(path[:])
            return

        if current_sum > target:
            return

        for i in range(start, len(nums)):
            path.append(nums[i])
            DFS(i, path, current_sum + nums[i])
            path.pop()

    result = []
    DFS(0, [], 0)
    return result

nums = [2, 3, 6, 7]
target = 7
print(combination_sum(nums, target))