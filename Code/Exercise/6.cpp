#include <iostream>
#include <cstring>
#include <stack>
#include <math.h>
using namespace std;

int main() {
    int n = 0;
    cin >> n;

    int grade[n + 10][4];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> grade[i][j];
        }
        grade[i][3] = grade[i][0] + grade[i][1] + grade[i][2];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (abs(grade[i][3] - grade[j][3]) <= 10) {
                if (abs(grade[i][0] - grade[j][0]) <= 5 && 
                    abs(grade[i][1] - grade[j][1]) <= 5 && 
                    abs(grade[i][2] - grade[j][2]) <= 5) {
                        count ++;
                }
            }
        }
    }

    cout << count;
    return 0;
}