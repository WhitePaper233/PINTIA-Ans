#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    unsigned int num;
    cin >> num;

    vector<vector<unsigned int>> result;

    for (unsigned int s { 2 }; s < sqrt(num) + 1; ++s) {
        vector<unsigned int> num_list;
        unsigned int tn { 1 };
        for (unsigned int i { s }; i < num + 1; ++i) {
            num_list.push_back(i);
            tn *= i;
            if (tn > num) break;
            if (num % tn == 0) {
                result.push_back(num_list);
            }
        }
    }

    unsigned int idx, sz = 0;
    for (unsigned int i { 0 }; i < result.size(); ++i) {
        if (result.at(i).size() > sz) {
            sz = result.at(i).size();
            idx = i;
        }
        if (result.at(i).size() == sz) {
            unsigned int sum1 { 1 };
            for (unsigned int j { 0 }; j < result.at(i).size(); ++j) {
                sum1 *= result.at(i).at(j);
            }
            unsigned int sum2 { 1 };
            for (unsigned int j { 0 }; j < result.at(idx).size(); ++j) {
                sum2 *= result.at(idx).at(j);
            }
            if (sum1 < sum2) {
                sz = result.at(i).size();
                idx = i;
            }
        }
    }

    if (sz == 0) {
        cout << 1 << endl << num << endl;
        return 0;
    }

    cout << result.at(idx).size() << endl;
    for (unsigned int i { 0 }; i < result.at(idx).size(); ++i) {
        cout << result.at(idx).at(i);
        if (i != result.at(idx).size() - 1) cout << '*';
        else cout << endl;
    }

    return 0;
}