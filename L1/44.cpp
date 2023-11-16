#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
  unordered_map<string, string> wm = {
    {"ChuiZi", "Bu"},
    {"JianDao", "ChuiZi"},
    {"Bu", "JianDao"},
  };
  
  int k;
  cin >> k;
  for (int i { 1 }; true; ++i) {
    string m;
    cin >> m;
    if (m == "End") break;
    if (i % (k + 1) == 0) cout << m << endl;
    else cout << wm[m] << endl;
  }
  
  return 0;
}

