#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int max, line = 0, left = 0;
  char symbol;
  scanf("%d %c", &max, &symbol);

  if (max == 1) {
    cout << symbol << "\n" << 0 << "\n";
    return 0;
  }

  for (int count = 1; count < max; count = count + ((line + 1) * 2 - 1) * 2) {
    line++;
    left = max - count;
  }

  vector<string> strVec;

  int line_o = line;
  while (line > 0) {
    string str = "";
    for (int i = 0; i < line_o - line; ++i) {
      str.append(" ");
    }
    str.append(line * 2 - 1, symbol);
    str.append("\n");

    strVec.insert(strVec.end(), { str });
    
    cout << str;
    --line;
  }

  auto it = strVec.rbegin();
  ++it;
  while (it != strVec.rend()) {
    cout << *it;
    ++it;
  }
  
  cout << left << "\n";
  
  return 0;
}