/*
题号：P1046
题目：陶陶摘苹果
题干：给出 10 个苹果的高度和陶陶伸手能达到的高度。陶陶还可以踩 30 厘米高的板凳，求她能摘到多少个苹果。
输入：10 个苹果高度，再输入陶陶伸手高度。输出：能摘到的苹果数。
原题：https://www.luogu.com.cn/problem/P1046
*/

#include <iostream>
using namespace std;

int main() {
    int apple[10];
    for (int i = 0; i < 10; i++) cin >> apple[i];

    int height;
    cin >> height;
    int answer = 0;
    for (int i = 0; i < 10; i++) {
        if (apple[i] <= height + 30) answer++;
    }
    cout << answer << '\n';
    return 0;
}
