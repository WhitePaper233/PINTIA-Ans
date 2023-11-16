#include <iomanip>
#include <iostream>
#include <set>
using namespace std;

int main() {
  int born, cnt;
  cin >> born;
  cin >> cnt;

  int i = born;
  while (true) {
    set<int> year_nums;
    
    if (i < 1000) year_nums.insert(0);
    int _i = i;
    while (_i) {
      year_nums.insert(_i % 10);
      _i /= 10;
    }
    if (year_nums.size() == cnt) {
      cout << i - born << ' ' << setw(4) << setfill('0') << i << endl;
      break;
    }
    ++i;
  }
  
  return 0;
}
