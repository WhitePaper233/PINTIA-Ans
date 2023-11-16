#include <string>
#include <iostream>

using namespace std;

int main() {
  string SrcStr;
  string MaskStr;
  string TargetStr = "";

  getline(cin, SrcStr);
  getline(cin, MaskStr);

  for (auto it = SrcStr.begin(); it != SrcStr.end(); ++it) {
    if (MaskStr.find(*it) == string::npos) {
      TargetStr.push_back(*it);
    }
  }

  cout << TargetStr << endl;
  
  return 0;
}

