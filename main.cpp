#include <iostream>
using namespace std;

int F(int n) {
    if (n <= 2) {
        return 1;
    } else {
        return F(n - 1) + F(n - 2);
    }
}

int main() {
    for (int i = 1; i <= 15; i++) {
        cout << F(i) << " ";
    }
    return 0;
}
