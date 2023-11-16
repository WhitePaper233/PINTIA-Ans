#include <iostream>
using namespace std;

int main() {
  int cnt;
  cin >> cnt;

  for (int i = 0; i < cnt; ++i) {
    string name;
    int br, pr;
    cin >> name;
    cin >> br;
    cin >> pr;

    bool flag = (br >= 15 && br <= 20) && (pr >= 50 && pr <= 70);
    if (!flag) cout << name << endl;
  }
  
  return 0;
}

