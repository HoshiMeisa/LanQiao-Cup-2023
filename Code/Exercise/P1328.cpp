#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, na, nb = 0;
    cin >> n >> na >> nb;

    int a[na + 10] = {0};
    int b[nb + 10] = {0};

    for (int i = 0; i < na; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < nb; i++) {
        cin >> b[i];
    }

    int ca, cb = 0;
    for (int i = 0, j = 0, count = 0; count < n; i++, j++, count++) {
        i = i % na;
        j = j % nb;
        if (a[i] == b[j]) {
            continue;
        } else if ((a[i] == 0 && (b[j] == 2 || b[j] == 3)) || 
                   (a[i] == 1 && (b[j] == 0 || b[j] == 3)) ||
                   (a[i] == 2 && (b[j] == 1 || b[j] == 4)) ||
                   (a[i] == 3 && (b[j] == 2 || b[j] == 4)) ||
                   (a[i] == 4 && (b[j] == 0 || b[j] == 1))) {
            ca ++;           
        } else {
            cb ++;
        }
    }

    cout << ca << " " << cb;
    return 0;

}
