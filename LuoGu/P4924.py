def toa(arr, x, y):
    for i in range(x - 1, x + 1):
        for j in range(y - 1, y + 1):
            arr[j][n - 1 - i] = arr[i][j]
    return arr


def tob(arr, x, y):
    for i in range(x - 1, x + 1):
        for j in range(y - 1, y + 1):
            arr[n - 1 - j][i] = arr[i][j]
    return arr

n, m = map(int, input().split())

arr = [[0 for i in range(n + 3)] for j in range(n + 3)]

count = 1
for i in range(n):
    for j in range(n):
        arr[i][j] = count
        count += 1


for _ in range(m):
    x, y, r, z = map(int, input().split())
    if z == 0:
        arr = toa(arr, x, y)
    else:
        arr = tob(arr, x, y)

for i in range(n):
    for j in range(n):
        print(arr[i][j], end=' ')
    print()
