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
