/*
题号：P1085
题目：不高兴的津津
题干：统计周一到周日每天的学校上课时间与额外上课时间。超过 8 小时会不高兴，求最不高兴且日期最早的一天；若都不超过 8 小时则输出 0。
输入：7 行，每行两个课时。输出：最不高兴的星期编号或 0。
原题：https://www.luogu.com.cn/problem/P1085
*/

#include <iostream>
using namespace std;

int main() {
    int bestDay = 0, bestHours = 8;
    for (int day = 1; day <= 7; day++) {
        int school, extra;
        cin >> school >> extra;
        int total = school + extra;
        if (total > bestHours) {
            bestHours = total;
            bestDay = day;
        }
    }
    cout << bestDay << '\n';
    return 0;
}
