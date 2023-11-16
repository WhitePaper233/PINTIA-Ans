#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a1, a2, n, ptr = 0;
    cin >> a1 >> a2 >> n;
    vector<int> nums = {a1, a2};
    if (n == 1) {
        cout << a1 << endl;
        return 0;
    }
    if (n == 2) {
        cout << a1 << ' ' << a2 << endl;
        return 0;
    }
    
    while (nums.size() <= n) {
        int res = nums.at(ptr) * nums.at(ptr + 1);
        vector<int> num_revers;
        if (res == 0) num_revers.push_back(0);
        while (res) {
            num_revers.push_back(res % 10);
            res /= 10;
        }
        reverse(num_revers.begin(), num_revers.end());
        for (int i { 0 }; i < num_revers.size() && nums.size() <= n; ++i) {
            nums.push_back(num_revers.at(i));
        }
        ++ptr;
    }
    for (int i { 0 }; i < n; ++i) {
        cout << nums.at(i);
        if (i != n - 1) cout << ' ';
    }
    cout << endl;

    return 0;
}