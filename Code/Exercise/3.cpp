#include <iostream>
#include <math.h>
#include <string>
#include <cstring>
#include <stack>
using namespace std;


// bool is_prime(int n) {
//     for (int i = 2; i < (int)sqrt(n); i++) {
//         if (n % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// int find_closest_prime(int arr) {
//     bool prime_itself = false;

    

// }


// int main() {
//     int m = 0;
//     cin >> m;

//     int arr[m][m];

//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> arr[i][j];
//         }
//     }

    

// }

// int main() {
//     const int MAXLENGTH = 100;
    
//     char arr[MAXLENGTH];
    
//     cin.getline(arr, MAXLENGTH);

//     int n;
//     bool is_hui = true;


//     for (int i = 0; i < strlen(arr); i++) {
//         if (arr[i] != arr[strlen(arr) - i - 1]) {
//             is_hui = false;
//         }
//     }

//     if (is_hui == true) {
//         cout << "True" << endl;
//     } else {
//         cout << "False" << endl;
//     }

//     return 0;

// }


// int main() {
//     int n = 2;
//     double A[n][n], B[n][n];

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> A[i][j];
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> B[i][j];
//         }
//     }

//     double C[n][n];

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             C[i][j] = 0;
//         }
//     }


//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             for (int k = 0; k < n; k++) {
//                 C[i][k] += A[i][j] * B[j][k];
//             }
//         }
//     }
    
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << C[i][j] << " ";
//         }

//         cout << endl;
//     }   


//     return 0;
// }

//给定一个由若干个闭合区间组成的数组，合并所有重叠的区间。例如，给定区间[1, 3], [2, 6], [8, 10], [15, 18]，
//函数应返回[1, 6], [8, 10], [15, 18]。

//编写一个函数，接收一个只包含'(', ')', '{', '}', '['和']'的字符串，判断字符串中的括号是否有效。
//括号必须以正确的顺序关闭，例如"()[]{}是有效的，但"(]"和"([)]"是无效的。
//() 40 41
//[] 91 93
//{} 173 175
//



bool is_valid (char str[]) {
    stack<char> st;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ')' || str[i] == ']' || str[i] == '}') {
            if (st.empty()) {
                return false;


            } else if (str[i] == ')') {
                if (st.top() != '(') {
                    return false;

                } else {
                    st.pop();
                }


            } else if (str[i] == ']') {
                if (st.top() != '[') {
                    return false;

                } else {
                    st.pop();
                }


            } else if (str[i] == '{') {
                if (st.top() != '}') {
                    return false;

                } else {
                    st.pop();
                }
            }

        }

        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
            st.push(str[i]);
        }
    }

    return true;
}

int main() {
    char str[30];

    cin.getline(str, 30);

    cout << (bool)is_valid(str) << endl;

    return 0;

}