#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;


bool isPrime(int n) {
    for (int i = 2; i < sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}



int main() {
    string str;
    cin >> str;

    int count[122];
    for (int i = 0; i < str.length(); i++) {
        count[(int)str[i]] ++;
    }

    int maxn = 0;
    int minn = 100;
    for (int i = 96 ; i < 122; i++) {
        if (str[i] < minn) {
            minn = str[i];
        } else if (str[i] > maxn) {
            maxn = str[i];
        }
    }
    
    if (isPrime(maxn - minn)) {
        cout << "Lucky Word" << endl;
        cout << maxn - minn;
    } else {
        cout << "No Answer" << endl;
        cout << "0";
    }

    return 0;
}
