#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    cin.ignore();
    
    vector<string> vec;
    for (int i { 0 }; i < n; ++i) {
        string s;
        getline(cin, s);
        if (s.find("qiandao") == string::npos && s.find("easy") == string::npos) {
            vec.push_back(s);
        }
    }

    if (m >= vec.size()) {
        cout << "Wo AK le" << endl;
    } else {
        cout << vec.at(m) << endl;
    }

    return 0;
}
