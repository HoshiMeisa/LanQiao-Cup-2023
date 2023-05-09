def bubbleSort(arr, n):
    for i in range(n - 1):
        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]


arr = [3, 2, 4, 5, 1, 8, 7, 6]
n = 8
bubbleSort(arr, n)

for i in arr:
    print(i, end=' ')
