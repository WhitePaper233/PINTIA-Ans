#include <iostream>

using namespace std;

int main() {
  int day;
  cin >> day;

  day += 2;
  if (day > 7) day -= 7;

  cout << day << endl;
    
  return 0;
}
