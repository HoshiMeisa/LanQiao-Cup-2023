#include <bits/stdc++.h>
using namespace std;


int main() {
    string str1;
    cin >> str1;

    // string tar = "os";

    // int count = 0;
    // int result = str1.find(tar);
    // while (result != string::npos) {
    //     result = str1.find(tar, result + 1);
    //     count ++;
    // }

    string strc = str1;

    reverse(strc.begin(), strc.end());

    if (strc == str1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}