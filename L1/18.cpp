#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string time;
  cin >> time;
 
  int hour = atoi(time.substr(0, 2).c_str()), min = atoi(time.substr(3).c_str());
  if (min > 0) ++hour;
  if (hour > 24) hour -= 24;
  if (hour <= 12) cout << "Only " << time << ".  Too early to Dang.";
  else {
    for (int i = 0; i < hour - 12; ++i) {
      cout << "Dang";
    }
  }
  cout << endl;
  
  return 0;
}

