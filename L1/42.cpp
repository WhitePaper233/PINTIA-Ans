#include <iostream>
#include <string>
using namespace std;

int main() {
  string input;
  cin >> input;

  string year = input.substr(6), date = input.substr(0, 5);
  cout << year << '-' << date << endl;
  return 0;
}
