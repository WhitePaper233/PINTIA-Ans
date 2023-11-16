#include <iostream>
using namespace std;

string handle(string s, int start, int end, string p_start, string p_end) {
  string opt { "" }, temp { s.substr(start - 1, end - start + 1) };
  opt.append(s.substr(0, start - 1)).append(s.substr(end));
  string p = p_start;
  p.append(p_end);
  if (opt.find(p) == string::npos) opt.append(temp);
  else opt.insert(opt.find(p) + p_start.size(), temp);
  return opt;
}

int main() {
  string ipt;
  cin >> ipt;
  int cnt;
  cin >> cnt;
  for (int i { 0 }; i < cnt; ++i) {
    int start, end;
    string p_start, p_end;
    cin >> start >> end >> p_start >> p_end;
    ipt = handle(ipt, start, end, p_start, p_end);
  }
  cout << ipt << endl;
  return 0;
}
