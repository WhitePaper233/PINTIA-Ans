#include <iostream>

using namespace std;

int main() {
  int cnt;
  cin >> cnt;

  for (int i = 0; i < cnt; ++i) {
    double h, w;
    cin >> h;
    cin >> w;
    w /= 2;
    
    double standard = (h - 100) * 0.9, diff = standard - w, _diff = diff;
    if (diff < 0) diff = -diff;
    if (diff < standard * 0.1) {
      cout << "You are wan mei!" << endl;
      continue;
    }
    if (_diff > 0) {
      cout << "You are tai shou le!" << endl;
      continue;
    }
    cout << "You are tai pang le!" << endl;
  }
}

