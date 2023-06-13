# E
# 贪心
def min_operations(n, x, y):
    x = str(x)
    y = str(y)
    operations = 0

    for i in range(n):
        current_x_digit = int(x[i])
        current_y_digit = int(y[i])

        digit_difference = abs(current_x_digit - current_y_digit)
        operations += min(digit_difference, 10 - digit_difference)

    return operations


# Read input
n = int(input())
x = int(input())
y = int(input())

# Calculate and print the result
result = min_operations(n, x, y)
print(result)
