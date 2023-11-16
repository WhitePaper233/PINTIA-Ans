#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int t = (int)pow(2, n);
    while (m--) {
        int t_ = t, res = 1;
        string s;
        cin >> s;
        for (char ch : s) {
            if (ch == 'n') {
                res += t_ / 2;
            }
            t_ -= t_ / 2;
        }
        cout << res << endl;
    }
}