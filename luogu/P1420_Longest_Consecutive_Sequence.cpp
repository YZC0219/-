/*
题号：P1420
题目：最长连号
题干：给出一个正整数序列，求其中最长连续子段的长度，要求子段内后一个数恰好比前一个数大 1。
输入：序列长度 n 和 n 个整数。输出：最长连号长度。
原题：https://www.luogu.com.cn/problem/P1420
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[10005];
    for (int i = 0; i < n; i++) cin >> a[i];

    int current = 1, longest = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1] + 1) current++;
        else current = 1;
        if (current > longest) longest = current;
    }
    cout << longest << '\n';
    return 0;
}
