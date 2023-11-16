#include <iostream>
#include <vector>
using namespace std;

int main() {
  int hat_cnt;
  cin >> hat_cnt;

  vector<int> ca;
  for (int i { 0 }; i < hat_cnt; ++i) {
    int temp;
    cin >> temp;
    ca.push_back(temp);
  }

  int baby_cnt;
  cin >> baby_cnt;
  for (int i { 0 }; i < baby_cnt; ++i) {
    bool guessed { false }, right { false }, wrong { false };
    for (int hat_idx { 0 }; hat_idx < hat_cnt; ++hat_idx) {
      int ba;
      cin >> ba;
      if (ba == 0) continue;
      guessed = true;
      if (ba == ca.at(hat_idx)) right = true;
      else wrong = true;
    }
    if (guessed && !wrong && right) cout << "Da Jiang!!!" << endl;
    else cout << "Ai Ya" << endl;
  }
  
  return 0;
}
