#include <iostream>
using namespace std;


int leftBound(int arr[], int n, int target) {
    int left = 0, right = n;

    while (left < right) {
        //(right - left) / 2 是在 left 和 right 之间的偏移量，它将始终小于 right，因此它不会导致整数溢出
        int mid = left + (right - left) / 2;

        if (arr[mid] < target) {  //l-----m--t---r
            left = mid + 1;       //左边界无论如何都是mid+1
        } else {
            right = mid;          //右边界无论如何都是mid
        }
    }

    return left;
}


int rightBound(int arr[], int n, int target) {
    int left = 0, right = n;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] > target) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return left - 1;
}


int main() {
    int arr[] = {11, 12, 22, 25, 25, 64, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 25;

    int result1 = leftBound(arr, n, target);
    int result2 = rightBound(arr, n, target);

    cout << result1 << " " << result2 << endl;

    return 0;
}
