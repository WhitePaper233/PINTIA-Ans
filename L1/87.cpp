#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, m, q;
    cin >> n >> m >> q;

    set<int> line, col;

    for (int i { 0 }; i < q; ++i) {
        int d, c;
        cin >> d >> c;
        if (d == 0 && col.find(c) == col.end()) {
            --n;
            col.insert(c);
        } 
        if (d == 1 && line.find(c) == line.end()) {
            --m;
            line.insert(c);
        }
    }

    cout << m * n;

    return 0;
}