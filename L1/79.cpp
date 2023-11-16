#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int cnt;
    cin >> cnt;

    vector<int> vec;
    for (int i { 0 }; i < cnt; ++i) {
        int tmp;
        cin >> tmp;
        vec.push_back(tmp);
    }

    int M = *max_element(vec.begin(), vec.end()), m = * min_element(vec.begin(), vec.end());
    int Mc = 0, mc = 0;
    for (int v : vec) {
        if (v == M) ++Mc;
        if (v == m) ++mc;
    }

    cout << m << ' ' << mc << endl << M << ' ' << Mc << endl;

    return 0;
}
