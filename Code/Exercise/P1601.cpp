#include <bits/stdc++.h>
using namespace std;


// string add(string a, string b) {

//     string c;
//     int addone = 0;
//     for (int i = 0; i < a.length(); i++) {

//     if (a.length() > b.length()) {
//         if (i <= b.length()) {
//             if (addone == 1) {
//                 c += to_string((stoi(a[i]) + stoi(b[i]) + 1) % 10);
//                 addone = 0;

//             } else {
//                 c += to_string((stoi(a[i]) + stoi(b[i])) % 10);
//             }
            
//             if (stoi(a) + stoi(b) >= 10) {
//                 addone = 1;
//             }
//         } else {
//             if (addone = 1) {
//                 c += 
//             }
//         }
//     }

//     }

// }


string add(string a, string b) {
    string c = "";
    int carry = 0;  // 表示要进的位数
    int i = a.length() - 1, j = b.length() - 1;  // 从末尾开始

    while (i >= 0 || j >= 0 || carry) {  // 只要还有没加完的位数，或者还有进位，就还需要继续运算
        int sum = carry;

        if (i >= 0) {  // a大于零表示还有位数没加完
            sum += a[i] - '0';  //减去ASCII码中的0，得到实际数字
            i--;
        }

        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }

        carry = sum / 10;  //进位取sum的十位
        sum = sum % 10;  //sum只保留自己的个位

        c.push_back(sum + '0');  //需要还原成字符
    }
    reverse(c.begin(), c.end());  //翻转，使得结果正确
    return c;
}


int main() {
    string a, b;
    cin >> a;
    cin >> b;

    cout << add(a, b) << endl;
    return 0;
}