#include <iomanip>
#include <iostream>
#include <set>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    int cnt1;
    cin >> cnt1;

    unordered_set<int> fc;
    vector<int> handsome;
    for (int i { 0 }; i < cnt1; ++i) {
        int cnt2;
        cin >> cnt2;
        if (cnt2 == 1) {
            int tmp;
            cin >> tmp;
            continue;
        }

        for (int j { 0 }; j < cnt2; ++j) {
            int tmp;
            cin >> tmp;
            fc.insert(tmp);
        }
    }

    cin >> cnt1;
    for (int i { 0 }; i < cnt1; ++i) {
        int tmp;
        cin >> tmp;
        if (fc.find(tmp) == fc.end()) handsome.push_back(tmp);
    }

    if (handsome.size() == 0) {
        cout << "No one is handsome" << endl;
        return 0;
    }

    set<int> uni;
    vector<int> newh;
    for (auto it = handsome.begin(); it != handsome.end(); ++it) {
        auto ret = uni.insert(*it);
        if (ret.second == false) {
            continue;
        }
        newh.push_back(*it);
    }

    for (int i { 0 }; i < newh.size(); ++i) {
        cout << setw(5) << setfill('0') << newh.at(i);
        if (i != newh.size() - 1) cout << ' ';
    }
    cout << endl;

    return 0;
}
