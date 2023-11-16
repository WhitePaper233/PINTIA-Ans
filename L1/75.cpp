#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string ipt, opt = "";
  cin >> ipt;
  
  if (ipt.size() < 6) (atoi(ipt.substr(0, 2).c_str()) < 22) ? opt = "20" : opt = "19";
  opt.append(ipt);
  opt.insert(4, "-");
  cout << opt << endl;
  
  return 0;
}

