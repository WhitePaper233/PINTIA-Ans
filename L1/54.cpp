#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<string> char_array;
  int scale;
  char symbol;
  cin >> symbol  >> scale;
  cin.ignore();
  
  for (int i { 0 }; i < scale; ++i) {
    string buf;
    getline(cin, buf);
    char_array.push_back(buf);
  }

  bool flag = true;
  for (int i { 0 }; i < scale; ++i) {
    if (char_array[i] != char_array[scale - 1 - i]) { flag = false; break; }
  }

  if (flag) cout << "bu yong dao le" << endl;

  for (int line { scale - 1 }; line >= 0; --line) {
    for (int ch { scale - 1 }; ch >= 0; --ch) {
      if (char_array[line][ch] != ' ') cout << symbol;
      else cout << ' ';
    }
    cout << endl;
  }
  
  return 0;
}

