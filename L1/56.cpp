#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    int cnt, sum { 0 };
    double diff { 100 };
    cin >> cnt;

    unordered_map<string, int> gmap;
    for (int i { 0 }; i < cnt; ++i) {
        string name;
        int gn;
        cin >> name >> gn;
        sum += gn;
        gmap.insert({name, gn});
    }

    double avarage = static_cast<double>(sum) / cnt / 2;
    string winner;
    for (auto player : gmap) {
        double diffrence = (avarage > player.second) ? avarage - player.second : player.second - avarage;
        if (diffrence < diff) {
            diff = diffrence;
            winner = player.first;
        }
    }
    cout << static_cast<int>(avarage) << ' ' << winner << endl;

    return 0;
}