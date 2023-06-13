#J
def find_min_array(x):
    n = 1
    while n * (n - 1) // 2 < x:
        n += 1
    
    ans = list(range(n, 0, -1))
    diff = n * (n - 1) // 2 - x
    if diff:
        ans[-(diff + 1)] += 1
        ans = ans[:-1]
    
    return n, ans


if __name__ == "__main__":
    x = int(input().strip())
    n, ans = find_min_array(x)
    print(n)
    print(" ".join(map(str, ans)))
