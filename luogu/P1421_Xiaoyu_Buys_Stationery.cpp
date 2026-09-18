/*
题号：P1421
题目：小玉买文具
题干：小玉有 a 元 b 角，每支签字笔价格为 1 元 9 角，求最多能买多少支。
输入：两个整数 a、b。输出：最多能购买的签字笔数量。
原题：https://www.luogu.com.cn/problem/P1421
*/

#include <iostream>
using namespace std;

int main() {
    int yuan, jiao;
    cin >> yuan >> jiao;
    int totalJiao = yuan * 10 + jiao;
    cout << totalJiao / 19 << '\n';
    return 0;
}
