#include <bits/stdc++.h>
using namespace std;


bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}


int main() {
    string str;
    cin >> str;

    int word[123] = {0};
    for (int i = 0; i < 123; i++) {
        word[i] = 0;
    }

    for (int i = 0; i < str.length(); i++) {
        word[(int)str[i]] = word[(int)str[i]] + 1;
    }

    int min = 100;
    int max = 0;
    for (int i = 0; i < 123; i++) {
        if (word[i] < min && word[i] != 0) {
            min = word[i];
        }
    }

    for (int i = 0; i < 123; i++) {
        if (word[i] > max) {
            max = word[i];
        }
    }


    if (isPrime(max - min)) {
        cout << "Lucky Word" << endl << max - min << endl;
    } else {
        cout << "No Answer" << endl << "0" << endl;
    }

    return 0;
}