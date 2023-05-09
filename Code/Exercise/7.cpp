#include <iostream>
using namespace std;

int main() {
    int w, x, h = 0;
    int q = 0;
    cin >> w >> x >> h;
    cin >> q;

    int area[q][6];
    for (int i = 0; i < q; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> area[i][j];
        }
    }

    int box[w][x][h];
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < x; j++) {
            for (int k = 0; k < h; k++) {
                box[i][j][k] = 1;
            }
        }
    }

    for (int n = 0; n < q; n++) {
        for (int i = area[n][0]; i < area[n][3]; i++) {
            for (int j = area[n][1]; j < area[n][4]; j++) {
                for (int k = area[n][2]; k < area[n][5]; k++) {
                    box[i][j][k] = 0;
                }
            }
        }
    }

    int count = 0;
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < x; j++) {
            for (int k = 0; k < h; k++) {
                if (box[i][j][k] == 1) {
                    count ++;
                }
            }
        }
    }

    cout << count;
    return 0;
}