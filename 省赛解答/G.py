#G
def check_T(matrix, x, y, n):
    T_shapes = [
        [(x - 1, y), (x, y), (x + 1, y), (x, y + 1)],
        [(x, y - 1), (x, y), (x, y + 1), (x + 1, y)],
        [(x - 1, y), (x, y), (x + 1, y), (x, y - 1)],
        [(x, y - 1), (x, y), (x, y + 1), (x - 1, y)]
    ]

    for shape in T_shapes:
        if all(0 <= i < n and 0 <= j < n and matrix[i][j] == 1 for i, j in shape):
            return True
    return False

def count_T_operations(matrix):
    n = len(matrix)
    count = 0
    for i in range(n):
        for j in range(n):
            if matrix[i][j] == 1 and check_T(matrix, i, j, n):
                count += 1
                matrix[i][j] = 0
    return count

if __name__ == "__main__":
    D = int(input().strip())
    results = []

    for _ in range(D):
        n = int(input().strip())
        matrix = [list(map(int, input().strip())) for _ in range(n)]
        results.append(count_T_operations(matrix))

    for result in results:
        print(result)
