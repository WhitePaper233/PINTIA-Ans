#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> xq;
  for (int i { 0 }; i < 24; ++i) {
    int temp;
    cin >> temp;
    xq.push_back(temp);
  }

  vector<int> t;
  while (true) {
    int temp;
    cin >> temp;
    if (temp > 23 || temp < 0) break;
    t.push_back(temp);
  }

  for (int i { 0 }; i < t.size(); ++i) {
    cout << xq.at(t.at(i)) << ' ';
    (xq.at(t.at(i)) > 50) ? cout << "Yes" : cout << "No";
    cout << endl;
  }
  
  return 0;
}

