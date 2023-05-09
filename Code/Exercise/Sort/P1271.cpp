#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;   //n是题目给出的多余的

    int arr[m];
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交换 arr[j] 和 arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}