#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<string> sentence;
  while (true) {
    string temp;
    getline(cin, temp);
    if (temp == ".") break;
    sentence.push_back(temp);
  }

  int index = 0, cnt = 0;
  for (int i { 0 }; i < sentence.size(); ++i) {
    if (sentence[i].find("chi1 huo3 guo1") != string::npos) {
      if (index == 0) index = i + 1;
      ++cnt;
    }
  }

  cout << sentence.size() << endl;
  if (!cnt) cout << "-_-#" << endl;
  else cout << index << ' ' << cnt << endl;
  
  return 0;
}
