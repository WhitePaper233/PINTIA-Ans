#include <cmath>
#include <cstdio>
#include <iostream>
#include <unordered_map>
using namespace std;

struct borrow {
    int his;
    int br;
    int re;
    int tt;
    int lc;
};

int main() {
    int cnt;
    cin >> cnt;
    cin.ignore();
    while (cnt) {
        unordered_map<int, borrow> bm;
        while (true) {
            int idx, time, time_h, time_m;
            char op;
            scanf("%d %c %d:%d", &idx, &op, &time_h, &time_m);
            if (idx == 0) break;
            time = time_h * 60 + time_m;
            bool flag = false;
            auto it = bm.find(idx);
            if (it != bm.end()) flag = true;
            if (!flag && op == 'S') {
                bm.insert({idx, borrow{0, time, 0, 0, 0}});
                continue;
            }
            if (op == 'S') {
                bm[idx].re = 0;
                bm[idx].br = time;
                bm[idx].lc = 0;
            }
            if (!flag && op == 'E') continue;
            if (op == 'E' && bm[idx].lc == 1) continue;
            if (op == 'E') {
                bm[idx].his += 1;
                bm[idx].re = time;
                bm[idx].tt += bm[idx].re - bm[idx].br;
                bm[idx].lc = 1;
            }
        }
        int btimes = 0, tt = 0;
        for (auto kv : bm) {
            btimes += kv.second.his;
            tt += kv.second.tt;
        }
        if (btimes) cout << btimes << ' ' << round((double)tt / (double)btimes) << endl;
        else cout << "0 0" << endl;
        
        --cnt;
        bm.clear();
    }
}