#include <iostream>
#include <cstring>
using namespace std;

//买卖股票的最佳时机：给定一个整数数组，其中第 i 个元素表示第 i 天的股票价格。你
//最多可以完成一笔交易（即买入和卖出一支股票一次）。设计一个算法来计算你所能获得的最大利润。

//初始状态：pro[0] = min(pro[0], pro[1])    pro[1] = max(pro[0], pro[1])
//状态转移方程： pro[n] = max(pro[n - 1] + i, pro[n - 2])