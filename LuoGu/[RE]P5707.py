w, x, h = map(int, input().split())
cube = [[[1 for _ in range(w)] for _ in range(x)] for _ in range(h)]
q = int(input())

for _ in range(q):
    x1, y1, z1, x2, y2, z2 = map(int, input().split())
    x1 -= 1
    x2 -= 1
    y1 -= 1
    y2 -= 1
    z1 -= 1
    z2 -= 1

    for l in range(x1, x2 + 1):
        for m in range(y1, y2 + 1):
            for n in range(z1, z2 + 1):
                cube[l][m][n] = 0

count = 0
for layer in cube:
    for row in layer:
        count += sum(row)

print(count)
