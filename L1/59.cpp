#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int cnt;
    cin >> cnt;

    for (int i { 0 }; i < cnt; ++i) {
        vector<string> para1, para2;

        while (true) {
            string temp;
            cin >> temp;
            if (temp.at(temp.size() - 1) == ',') {
                para1.push_back(temp.substr(0, temp.size() - 1));
                break;
            }
            para1.push_back(temp);
        }

        while (true) {
            string temp;
            cin >> temp;
            if (temp.at(temp.size() - 1) == '.') {
                para2.push_back(temp.substr(0, temp.size() - 1));
                break;
            }
            para2.push_back(temp);
        }

        if (para1.at(para1.size() - 1).size() < 3 || para2.at(para2.size() - 1).size() < 3) {
            cout << "Skipped" << endl;
            continue;
        }

        if (para1.at(para1.size() - 1).substr(para1.at(para1.size() - 1).size() - 3) != "ong" ||
            para2.at(para2.size() - 1).substr(para2.at(para2.size() - 1).size() - 3) != "ong") {
                cout << "Skipped" << endl;
                continue;
            }
        
        for (int j { 0 }; j < para1.size(); ++j) {
            cout << para1.at(j);
            if (j != para1.size() - 1) cout << ' ';
        }
        cout << ", ";

        for (int j { 0 }; j < para2.size(); ++j) {
            if (j < para2.size() - 3) cout << para2.at(j) << ' ';
            else {
                cout << "qiao ben zhong";
                break;
            }
        }
        cout << '.' << endl;
    }

    return 0;
}
