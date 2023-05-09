#include <iostream>
#include <cstring>
using namespace std;

//最长递增子序列：给定一个无序整数数组，找出其中最长上升子序列的长度

//初始状态: len[0] = len[1] = ... = len[n] = 1
//状态转移方程: len[n] = max(len[i], len[j + 1])

int longest(int n, int arr[]) {
    int len[n + 1];
    int max_length = 1;

    for (int i = 0; i <= n; i++) {
        len[i] = 0;
    }

    for (int i = i; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] < arr[j]) {
                len[i] = max(len[i], len[j] + 1);
            }
        }

        max_length = max(len[i], max_length);
    }



    return len[n];
}



int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[n];
    }

    cout << longest(n, arr) << endl;

    return 0;
}