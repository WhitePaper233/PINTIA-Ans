#include <iostream>
#include <set>
#include <unordered_map>
#include <utility>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matrix;
    pair<int, int> zero_pos;
    set<int> already;
    for (int y { 0 }; y < 3; ++y) {
        vector<int> xline;
        for (int x { 0 }; x < 3; ++x) {
            int tmp;
            cin >> tmp;
            if (!tmp) zero_pos = {y ,x};
            xline.push_back(tmp);
            already.insert(tmp);
        }
        matrix.push_back(xline);
    }
    for (int i { 1 }; i < 10; ++i) {
        if (already.find(i) == already.end()) {
            matrix[zero_pos.first][zero_pos.second] = i;
        }
    }

    for (int i { 0 }; i < 3; ++i) {
        int x, y;
        cin >> x >> y;
        cout << matrix.at(x - 1).at(y - 1) << endl;
    }

    int d;
    unordered_map<int, int> reward = {
        {6, 10000},
        {7, 36},
        {8, 720},
        {9, 360},
        {10, 80},
        {11, 252},
        {12, 108},
        {13, 72},
        {14, 54},
        {15, 180},
        {16, 72},
        {17, 180},
        {18, 119},
        {19, 36},
        {20, 306},
        {21, 1080},
        {22, 144},
        {23, 1800},
        {24, 3600},
    };

    cin >> d;
    switch (d) {
        case 1: cout << reward[matrix.at(0).at(0) + matrix.at(0).at(1) + matrix.at(0).at(2)]; break;
        case 2: cout << reward[matrix.at(1).at(0) + matrix.at(1).at(1) + matrix.at(1).at(2)]; break;
        case 3: cout << reward[matrix.at(2).at(0) + matrix.at(2).at(1) + matrix.at(2).at(2)]; break;
        case 4: cout << reward[matrix.at(0).at(0) + matrix.at(1).at(0) + matrix.at(2).at(0)]; break;
        case 5: cout << reward[matrix.at(0).at(1) + matrix.at(1).at(1) + matrix.at(2).at(1)]; break;
        case 6: cout << reward[matrix.at(0).at(2) + matrix.at(1).at(2) + matrix.at(2).at(2)]; break;
        case 7: cout << reward[matrix.at(0).at(0) + matrix.at(1).at(1) + matrix.at(2).at(2)]; break;
        case 8: cout << reward[matrix.at(0).at(2) + matrix.at(1).at(1) + matrix.at(2).at(0)]; break;
    }
    cout << endl;

    return 0;
}
