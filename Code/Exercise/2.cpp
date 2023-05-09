#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
using namespace std;

// int f(int n) {
//     if (n == 1 || n == 2) {
//         return 1;
//     } else {
//         return f(n - 1) + f(n - 2);
//     }
// }

// int main() {
//     int n = 4;
//     cout << f(4) << endl;
// }

// int main() {
//     char str[50];
//     int countC = 0;
//     int countS = 0;
//     int countB = 0;

//     cin.getline(str, 50);



//     for (int i = 0; i < strlen(str); i++) {
//         if ((int)str[i] >= 65 && (int)str[i] <= 90) {
//             countC ++;
//         } else if ((int)str[i] >= 97 && (int)str[i] <= 122) {
//             countS ++;
//         } else if ((int)str[i] == 32) {
//             countB ++;
//         } 
//     }
    
//     cout << countC << " " << countS << " " << countB << endl;
//     return 0; 
// }


// int main() {
//     int n;
//     cin >> n;

//     if (n == 1) {
//         cout << "False" << endl;
//         return 0;
//     }

//     for (int i = 2; i <= (int)sqrt(n); i++) {
//         if (n % i == 0) {
//             cout << "False" << endl;
//             return 0;
//         }
//     }

//     cout << "True" << endl;
//     return 0;

// }

int numWays(int n) {
    if (n == 0) {
        return 1;
    }

    if (n <= 2) {
        return n;
    }

    int a = 1;
    int b = 2;
    int temp = 0;

    for (int i = 3; i <= n; i++) {
        temp = (a + b) % 1000000007; 
        a = b;
        b = temp;
    }
}



int main() {

}


/*
dp[0][0][...] = 边界值
for(状态1 ：所有状态1的值){
    for(状态2 ：所有状态2的值){
        for(...){
          状态转移方程
          dp[状态1][状态2][...] = 求最值
        }
    }
}
*/
