#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int p1, p2, p3, p4, min, diff;
  cin >> p1 >> p2 >> p3 >> p4 >> min >> diff;
  vector<int> pa = {p1, p2, p3, p4};
  int max_ = max({p1, p2, p3, p4});

  vector<int> pl;
  for (int i = 0; i < 4; ++i) {
    if (max_ - pa.at(i) > diff || pa.at(i) < min) pl.push_back(i + 1);
  }
  if (!pl.size()) cout << "Normal" << endl;
  else if (pl.size() == 1) cout << "Warning: please check #" << pl.at(0) << '!' << endl;
  else cout << "Warning: please check all the tires!" << endl;
  
  return 0;
}
