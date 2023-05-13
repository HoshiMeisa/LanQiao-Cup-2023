def compute_prefix_function(pattern):
    prefix = [0] * len(pattern)
    length = 0

    for i in range(1, len(pattern)):
        while length > 0 and pattern[i] != pattern[length]:
            length = prefix[length - 1]

        if pattern[i] == pattern[length]:
            length += 1

        prefix[i] = length

    return prefix


print(compute_prefix_function("ABABCABAB"))
