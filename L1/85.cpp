#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> origin;
  for (int i { 0 }; i < 6; ++i) {
    int temp;
    cin >> temp;
    origin.push_back(temp);
  }

  int time;
  cin >> time;

  vector<int> res;
  for (int i { 0 }; i < 6; ++i) {
    vector<int> his = {origin.at(i)};
    for (int j { 0 }; j < time; ++j) {
      int his_max = 0;
      for (int n { 1 }; n < 7; ++n) {
        auto it = find(his.begin(), his.end(), n);
        if (it == his.end()) his_max = n;
      }
      his.push_back(his_max);
    }
    res.push_back(his.at(his.size() - 1));
  }

  for (int i { 0 }; i < 6; ++i) {
    cout << res.at(i);
    if (i != 5) cout << ' ';
  }
  cout << endl;
  
  return 0;
}
