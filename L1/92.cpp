#include <iostream>
using namespace std;

int main() {
  int cnt;
  cin >> cnt;
  
  for (int i { 0 }; i < cnt; ++i) {
    int a, b, c;
    cin >> a >> b >> c;

    if (c == a * b) cout << "Lv Yan" << endl;
    else if (c == a + b) cout << "Tu Dou" << endl;
    else cout << "zhe du shi sha ya!" << endl;
  }
  
  return 0;
}

