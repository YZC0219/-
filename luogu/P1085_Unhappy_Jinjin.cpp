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
