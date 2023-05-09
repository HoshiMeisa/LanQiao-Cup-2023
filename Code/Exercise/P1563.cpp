#include <bits/stdc++.h>
using namespace std;

struct doll
{
    int ori;
    string prof;
};

int main(){
    int n, m;
    cin >> n >> m;

    doll dolls[n];
    for (int i = 0; i < n; i++) {
        cin >> dolls[i].ori >> dolls[i].prof;
    } 


    int now = 0;
    for (int i = 0; i < m; i++) {
        int ori, num = 0;
        cin >> ori >> num;

        now = (now + n) % n;

        if ((ori == 0 && dolls[now].ori == 1) || (ori == 1 && dolls[now].ori == 0)) {
            now = now + num;
        } else {
            now = now - num;
        }

    }

    now = (now + n) % n;
    cout << dolls[now].prof;
    return 0;
}