def display(M):
    n = len(M)
    m = len(M[0])

    for i in range(n):
        for j in range(m):
            print(M[i][j], end=" ")
        print()


xa1, ya1, xa2, ya2 = map(float, input().split())
xb1, yb1, xb2, yb2 = map(float, input().split())

x1 = max(xa1, xb1)
x2 = min(xa2, xb2)
y1 = max(ya1, yb1)
y2 = min(ya2, yb2)

if x2 > x1 and y2 > y1:
    s = (x2 - x1) * (y2 - y1)
    ss = "{:.2f}".format(s)
    print(ss)
else:
    print("0.00")

