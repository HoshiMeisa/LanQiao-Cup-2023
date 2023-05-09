#include <bits/stdc++.h>
using namespace std;

int main() {
    char logline[30] = {0};

    int cw = 0;
    int cl = 0;
    int ct = 0;

    char log[2510][30] = {0};

    int countline = 0;
    bool stop = false;
    bool isFirst = true;

    while (!stop) {
        cin.getline(logline, 30);

        for (int i = 0; i < strlen(logline); i++) {
            log[countline][i] = logline[i];
        }
        countline ++;

        for (int i = 0; i < strlen(logline); i++) {
            if (logline[i] == 'W') {
                cw ++;
                isFirst = false;

            } else if (logline[i] == 'L') {
                cl ++;
                isFirst = false;

            } else if (logline[i] == 'E') {
                stop = true;
                break;
            }

            if ((cw == 11 || cl == 11) && abs(cw - cl) >= 2) {
                cout << cw << ":" << cl << endl;
                cw = 0;
                cl = 0;
            }

        }
    }

    if (cw != 0 || cl != 0) {
        cout << cw << ":" << cl << endl;
    }

    if (isFirst) {
        cout << "0:0" << endl << endl << "0:0";
        return 0;
    }

    cout << endl;
    cw = 0;
    cl = 0;
    ct = 0;

    for (int i = 0; i < countline; i++) {
        for (int j = 0; j < strlen(log[countline]); i++) {
            if (logline[i] == 'W') {
                cw ++;

            } else if (logline[i] == 'L') {
                cl ++;
            }

            if ((cw == 21 || cl == 21) && abs(cw - cl) >= 2) {
                cout << cw << ":" << cl << endl;
                cw = 0;
                cl = 0;
            }
        }
    }

    if (cw != 0 || cl != 0) {
        cout << cw << ":" << cl << endl;
    }

    return 0;
}