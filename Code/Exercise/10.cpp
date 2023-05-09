#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    
    char calway;
    
    int numbers [n][2];
    for (int i = 0; i < n; i++) {
        numbers[n][0] = ' ';
        numbers[n][1] = ' ';
    }

    for (int i = 0; i < n; i++) {
        cin >> calway;
        cin >> numbers[i][0] >> numbers[i][1];
    }



}
