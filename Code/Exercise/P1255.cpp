//楼梯有 N 阶，上楼可以一步上一阶，也可以一步上二阶。
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


string f(int n) {
    if (n <= 2) {
        return to_string(n);
    }

    string dp[n + 1];
    dp[1] = "1";
    dp[2] = "2";
    
    for (int i = 3; i <= n; i++) {
        dp[i] = add(dp[i - 1], dp[i - 2]);
    }

    return dp[n];
}


int main() {
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}

