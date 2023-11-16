#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int col;
    string ipt;
    cin >> col;
    cin.ignore();
    getline(cin, ipt);

    vector<string> opt_list;
    for (int n { 0 }; n < col; ++n) {
        int maxl = 0;
        string temp { "" };
        for (int i { n }; i < ipt.size(); i += col) {
            string s;
            s.push_back(ipt.at(i));
            temp.insert(0, s);
        }
        int diff = ipt.size() / col + 1 - temp.size();
        if (diff > 0 && col != 1 && ipt.size() % col != 0) {
            for (int i { 0 }; i < diff; ++i) {
                temp.insert(0, " ");
            }
        }
        opt_list.push_back(temp);
    }

    for (int i { 0 }; i < opt_list.size(); ++i) {
        cout << opt_list.at(i) << endl;
    }

    return 0;
}
