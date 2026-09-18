// 题号：P1421
// 题目：小玉买文具

#include <iostream>
using namespace std;

int main() {
    int yuan, jiao;
    cin >> yuan >> jiao;
    int totalJiao = yuan * 10 + jiao;
    cout << totalJiao / 19 << '\n';
    return 0;
}
