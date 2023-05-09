#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n + 10][n + 10];
    int count = 1;
    for (int i = 0; i < n + 10; i++) {
        for (int j = 0; j < n + 10; j++) {
            arr[i][j] = count;
            count += 2;
        }
    }

    while (m--) {
        int x, y, r, z = 0;
        cin >> x >> y >> r >> z;

        for (int i = x - r; i <= x + r; i++) {
            for (int j = y - r; j <= y + r; j++) {
                if (z == 1) {
                    arr[i][j] = arr[2*r + 1 - j][i];
                    
                } else {
                    arr[i][j] = arr[j][2*r + 1 - i];
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arrc[i][j] = arr[i][j];
            }
        }

    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arrc[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
} 