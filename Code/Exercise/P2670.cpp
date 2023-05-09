// 青春、友情、夢なんての曲が好き。それがわたしのなんても届かないことですから。
//　何十回星に願った目を閉じて、今でもずっと忘れていないんだよ

/*
0 0 0 0
0 0 0 0
0 0 0 0
0 0 0 0
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m = 0;
    cin >> n >> m;

    int chessbroad[n+10][m+10];
    for (int i = 0; i <= n + 5; i++) {
        for (int j = 0; j <= m + 5; j++) {
            chessbroad[i][j] = 0;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            char input;
            cin >> input;
            if (input == '*') {
                chessbroad[i][j] = 1;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (chessbroad[i][j] == 1) {
                cout << "*";
            } else {
                cout << chessbroad[i-1][j-1] + chessbroad[i-1][j] + chessbroad[i-1][j+1] + 
                        chessbroad[i][j-1] + chessbroad[i][j+1] + chessbroad[i+1][j-1] +
                        chessbroad[i+1][j] + chessbroad[i+1][j+1];
            }
        }
        cout << endl;
    }


}