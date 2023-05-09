#include <iostream>
using namespace std;


int main() {
    int n = 0;
    cin >> n;
    n = n - 1;

    int num = 0;
    while (n --) {
        num = num + 1;
        num = num * 2;
    }

    cout << num << endl;
    return 0;

}