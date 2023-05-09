#include <iostream>
#include <string>
using namespace std;

// int main() {
//     string st;
//     cin >> st;

//     for (int i = 0; i < st.length(); i++) {
//         for (int j = 0; j < st.length(); j++) {
//             char temp = st[i];
//             st[i] = st[j];
//             st[j] = temp;
//         }
//     }

//     cout << st << endl;
//     return 0;
// }

// int f(int n) {
//     if (n == 0 || n == 1) {
//         return 1;
//     } else {
//         return n * f(n - 1);
//     }
// }



// int main() {
//     int n;
//     cin >> n;

//     cout << f(n) << endl;

// }

// int main() {
//     int n;
//     cin >> n;

//     int result = 1;

//     while (n != 0) {
//         result = result * n;
//         n = n - 1;
//     }

//     cout << result << endl;
//     return 0; 
// }


int main() {
    double A[2][2];
    double B[2][2];
    double R[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> B[i][j];
        }
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            R[i][j] = 0;
        }
    }
    

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                R[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << R[i][j] << " ";
        }

        cout << endl;
    }


    return 0;
}

/*

a b
c d

e f
g h

x x
x x

*/

