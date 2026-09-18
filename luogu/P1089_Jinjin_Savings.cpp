// 题号：P1089
// 题目：津津的储蓄计划

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
