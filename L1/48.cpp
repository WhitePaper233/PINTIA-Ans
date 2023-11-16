#include <iostream>
#include <vector>
using namespace std;

int main() {
    int ra, ca, rb, cb;
    cin >> ra >> ca;
    vector<vector<int>> arr1;
    for (int i { 0 }; i < ra; ++i) {
        vector<int> tmp;
        for (int n { 0 }; n < ca; ++n) {
            int num;
            cin >> num;
            tmp.push_back(num);
        }
        arr1.push_back(tmp);
    }

    cin >> rb >> cb;
    if (ca != rb) {
        cout << "Error: " << ca << " != " << rb << endl;
        return 0;
    }

    vector<vector<int>> arr2;
    for (int i { 0 }; i < rb; ++i) {
        vector<int> tmp;
        for (int n { 0 }; n < cb; ++n) {
            int num;
            cin >> num;
            tmp.push_back(num);
        }
        arr2.push_back(tmp);
    }

    cout << ra << ' ' << cb << endl;
    vector<vector<int>> result;
    for (int row { 0 }; row < ra; ++row) {
        vector<int> rowarr;
        for (int xcol { 0 }; xcol < cb; ++xcol) {
            int num { 0 };
            for (int col {0}; col < ca; ++col) {
                num += arr1.at(row).at(col) * arr2.at(col).at(xcol);
            }
            rowarr.push_back(num);
        }
        result.push_back(rowarr);
    }

    for (int row { 0 }; row < ra; ++row) {
        for (int col { 0 }; col < cb; ++col) {
            cout << result[row][col];
            if (col != cb - 1) cout << ' ';
            else cout << endl;
        }
    }

    return 0;
}
