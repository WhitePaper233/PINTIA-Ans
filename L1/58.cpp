#include <iostream>
#include <string>
using namespace std;

int main() {
  string ipt, opt { "" };
  getline(cin, ipt);
  ipt.push_back(' ');
  
  int cnt { 0 };
  for (int i { 0 }; i < ipt.size(); ++i) {
    if (ipt[i] == '6') cnt += 1;
    else opt.push_back(ipt[i]);

    if (cnt != 0 && ipt.at(i + 1) != '6') {
      if (cnt < 4) for (int j { 0 }; j < cnt; ++j) opt.push_back('6');
      else if (3 < cnt && cnt < 10) opt.push_back('9');
      else opt.append("27");
      cnt = 0;
    }
  }
  opt.pop_back();
  cout << opt << endl;
  
  return 0;
}
