#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

string decode(string a) {
  string s { "" };
  for (int i { 1 }; i < a.size(); ++i) {
    if ((a.at(i) - '0') % 2 == (a.at(i - 1) - '0') % 2) {
      s.push_back(max({a.at(i) - '0', a.at(i - 1) - '0'}) + '0');
    }
  }
  return s;
}

int main() {
  string a1, a2;
  cin >> a1 >> a2;
  string s1 { decode(a1) }, s2 { decode(a2) };
  if (s1 == s2) cout << s1 << endl;
  else cout << s1 << endl << s2 << endl;
  return 0;
}
