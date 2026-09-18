/*
题号：P5719
题目：分类平均
题干：把 1 到 n 的正整数分成两类：能被 k 整除的 A 类和不能被 k 整除的 B 类，分别求两类数的平均值。
输入：正整数 n、k。输出：A、B 两类平均数，均保留 1 位小数。
原题：https://www.luogu.com.cn/problem/P5719
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    double sumA = 0, sumB = 0;
    int countA = 0, countB = 0;

    for (int i = 1; i <= n; i++) {
        if (i % k == 0) {
            sumA += i;
            countA++;
        } else {
            sumB += i;
            countB++;
        }
    }

    cout << fixed << setprecision(1);
    cout << sumA / countA << " " << sumB / countB << endl;
    return 0;
}
