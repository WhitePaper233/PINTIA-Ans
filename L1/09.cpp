#include <iostream>
using namespace std;

struct rn {
    int nume;
    int deno;

    void add(rn arn) {
        int fdeno = deno * arn.deno;
        int fnume = nume * arn.deno + deno * arn.nume;
        if (fnume == 0) {
            nume = 0;
            deno = fdeno;
            return;
        }

        int a, b;
        if (fdeno > fnume) {
            a = fdeno;
            b = fnume;
        } else {
            a = fnume;
            b = fdeno;
        }
        while (a % b) {
            int tmp = a;
            a = b;
            b = tmp % b;
        }
        
        nume = fnume / b;
        deno = fdeno / b;
    };
};

int main() {
    int cnt;
    rn x = rn{1, 1};
    cin >> cnt;
    for (int i { 0 }; i < cnt; ++i) {
        string tmp;
        cin >> tmp;
        int pos = tmp.find("/");
        rn arn = rn{atoi(tmp.substr(0, pos).c_str()), atoi(tmp.substr(pos + 1).c_str())};
        x.add(arn);
    }
    x.add(rn{-1, 1});

    if (x.nume == 0) {
        cout << 0 << endl;
        return 0;
    }

    int n = x.nume / x.deno;
    if (n) cout << n;
    int nume_rest = x.nume - n * x.deno;
    if (x.deno < 0) {
        x.deno = -x.deno;
        nume_rest = -nume_rest;
    }
    if (nume_rest) {
        if (n) cout << ' ';
        cout << nume_rest << "/" << x.deno;
    }
    else cout << endl;

    return 0;
}
