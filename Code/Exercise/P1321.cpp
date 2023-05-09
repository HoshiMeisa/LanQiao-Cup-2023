#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    int cb = 0;
    int cg = 0;

    for (int i = 0; i <= str.length() - 3; i++) {
        if (str[i] == 'b' || str[i + 1] == 'o' || str[i + 2] == 'y') {
            cb ++;
        } 
        
        if (str[i] == 'g' || str[i + 1] == 'i' || str[i + 2] == 'r' || str[i + 3] == 'l') {
            cg ++;
        }
    }

    cout << cb << endl << cg;
    return 0;

}