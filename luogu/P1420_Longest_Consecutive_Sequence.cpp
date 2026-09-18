// 题号：P1420
// 题目：最长连号

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
