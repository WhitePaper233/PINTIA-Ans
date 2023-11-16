#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> m;
    for (int i { 0 }; i < n; ++i) {
        int tmp;
        cin >> tmp;
        m.push_back(10 * tmp);
    }

    int max_ = *max_element(m.begin(), m.end());
    vector<int> order;
    for (int i { 0 }; i < max_; ++i) {
        for (int j { 0 }; j < n; ++j) {
            if (m.at(j) != 0) {
                order.push_back(j + 1);
                --m[j];
            }
        }
    }

    vector<int> forder;
    for (int i { 0 }; i < order.size(); ++i) {
        if (i > 0 && order.at(i - 1) == order.at(i)) {
            forder.push_back(0);
        }
        forder.push_back(order.at(i));
    }

    vector<vector<int>> res;
    for (int i { 0 }; i < n; ++i) {
        vector<int> tmp;
        for (int j { 0 }; j < forder.size(); ++j) {
            if (forder.at(j) == i + 1) {
                tmp.push_back(j + 1);
            }
        }
        res.push_back(tmp);
    }

    for (int i { 0 }; i < n; ++i) {
        cout << '#' << i + 1 << endl;
        for (int j { 0 }; j < res.at(i).size(); ++j) {
            if (j != 0 && j % 10 == 0) cout << endl;
            cout << res.at(i).at(j);
            if ((j + 1) % 10 != 0 && j != res.at(i).size() - 1) cout << ' ';
        }
        cout << endl;
    }

    return 0;
}
