/*
题号：P1089
题目：津津的储蓄计划
题干：妈妈每月给津津 300 元。津津支付当月预算后，把手中整百的钱存给妈妈；若某月钱不够，输出最先发生的月份，否则计算年末存款加 20% 利息后的总钱数。
输入：12 行，每行一个月的预算。输出：钱不够时输出负月份，否则输出年末总金额。
原题：https://www.luogu.com.cn/problem/P1089
*/

#include <iostream>
using namespace std;

int main() {
    int cash = 0, saved = 0;
    for (int month = 1; month <= 12; month++) {
        int budget;
        cin >> budget;
        cash += 300;
        if (cash < budget) {
            cout << -month << '\n';
            return 0;
        }
        cash -= budget;
        saved += cash / 100 * 100;
        cash %= 100;
    }
    cout << cash + saved * 12 / 10 << '\n';
    return 0;
}
