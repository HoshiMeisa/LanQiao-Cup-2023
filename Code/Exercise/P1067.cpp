#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x[n];
    for (int i = 0; i < n; i++) {
        cin >> x[n];
    }

    for (int i = n; i >= 0; i--) {
        if (x[i] != 0 && i == n) {
            cout << x[i] << "x^" << i;

        } else if (x[i] == 0) {
            continue;

        } else if (x[i] > 0 && i != n) {
            cout << "+" << x[i] << "x^" << i;

        } else if (x[i] < 0 && i != n) {
            cout << x[i] << "x^" << i;
        }
    }

    return 0;
}