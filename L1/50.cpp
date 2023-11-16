#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int l, n;
  cin >> l >> n;

  int index = pow(26, l) - n;
  string output;
  for (int i { 0 }; i < l; ++i) {
    string out;
    out.push_back('a' + index % 26);
    output.insert(0, out);
    index /= 26;
  }
  cout << output << endl;
  return 0;
}
