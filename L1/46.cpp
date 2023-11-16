    #include <iostream>
    using namespace std;

    int main() {
        unsigned long long num, cnt = 0, start_num = 1;
        string out { "" };
        cin >> num;

        while (start_num < num) {
            start_num = start_num * 10 + 1;
            ++cnt;
        }

        while (true) {
            ++cnt;
            unsigned long long mod = start_num % num;
            out.push_back(start_num / num + '0') ;
            if (mod == 0) {
                cout << out << ' ' << cnt << endl;
                break;
            }
            start_num = mod * 10 + 1;
        }

        return 0;
    }
