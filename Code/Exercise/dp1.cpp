#include <bits/stdc++.h>
using namespace std;

// 一条街上有 n 个房子，每个房子里有一定数量的金钱。一个盗贼计划在这条街上偷金钱，
// 但他不能偷相邻的两个房子，否则会触发报警器。问盗贼能偷到的最大金钱数。

// 初始化：     steal[0] = 0       steal[1] = max(money[0], money[1])
// 状态转移方程：steal[n] = max(steal[n - 1], steal[n - 2] + money[n])

int mostMoney(int n, int money[]) {
    if (n == 0) {
        return n;
    }

    int steal[n + 1];
    steal[0] = 0;
    steal[1] = max(money[0], money[1]);

    for (int i = 2; i <= n; i++) {
        //这里的状态转移方程是指，如果选择偷最后一个房子（即i-1），则可以选择到i-2为止得到的所有钱，再加上i-1的钱
        //如果选择不偷，就可以获得到i-1为止的所有钱
        steal[i] = max(steal[i - 1], steal[i - 2] + money[i - 1]);  
    }

    return steal[n];
}


int main() {
    int n; 
    cin >> n;
    int money[n];

    for (int i = 0; i < n; i++) {
        cin >> money[i];
    }

    cout << mostMoney(n, money) << endl;

    return 0;
}