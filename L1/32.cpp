#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string input;
  int length;
  char fill;

  scanf("%d %c", &length, &fill);
  cin.ignore();
  getline(cin, input);

  if (input.size() < length) {
    for (int i = 0; i < length - input.size(); ++i) cout << fill;
    cout << input << endl;
    return 0;
  }

  cout << input.substr(input.size() - length) << endl;
  return 0;
}
