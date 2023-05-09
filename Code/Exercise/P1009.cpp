#include <bits/stdc++.h>
using namespace std;


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

string multi(string a, string b) {
    int la = a.length(), lb = b.length();
    int result[(la + lb)] = {0};

    for (int i = a.length() - 1; i >= 0; i--) {  //从末尾开始
        for (int j = b.length() - 1; j >= 0; j--) {

            int prod = (a[i] - '0') * (b[j] - '0');  // 暂存a与b在这一位上的乘积
            result[i + j + 1] += prod;               // 存到下一位上

            result[i + j] += result[i + j + 1] / 10;  // 本位只保留个位
            result[i + j + 1] %= 10;                  // 下一位只保留十位，作为进位
        }
    }

    //处理字符串
    string c;
    for (int i = 0; i < la + lb; i++) {
        if (c.empty() && result[i] == 0) {   //删去前导0
            continue;
        } else {
            c.push_back(result[i] + '0');
        }

        if (c.empty()) {   //如果删去了前导0之后还是0，说明结果就是0，直接返回
            return "0";
        }
    }

    return c;
}


string f(string n) {
    if (n == "1") {
        return "1";

    } else {
        return multi(n, f(to_string(stoi(n) - 1)));
    }
}


int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << "1";
        return 0;
    }

    string c = "1";
    for (int i = 2; i <= n; i++) {
        c = add(c, f(to_string(i)));
    }

    cout << c << endl;
    return 0;
}
