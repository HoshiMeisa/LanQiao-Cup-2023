#include<bits/stdc++.h>
using namespace std;


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

int main() {
    string a, b;
    cin >> a;
    cin >> b;

    if (a == "0" || b == "0") {
        cout << "0";
        return 0;
    }
    cout << multi(a, b) << endl;
    return 0;
}