#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

const int MAXNUM = 10000;

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


bool isPalindrome(int n) {
    string str = to_string(n);
    string reversed_str = str;
    reverse(reversed_str.begin(), reversed_str.end());

    return str == reversed_str;
}

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = a; i < b; i++) {
        if (isPrime(i) && isPalindrome(i)) {
            cout << i << endl;
        }
    }

    return 0;
}
