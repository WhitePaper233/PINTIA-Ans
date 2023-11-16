#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool IsEven(string num) {
  if ((num[num.size() - 1] - '0') % 2 == 0) return true;
  return false;
}

int main() {
  int num, even = 0, odd = 0;

  cin >> num;

  for (int i = 0; i < num; ++i) {
    string number;
    cin >> number;

    IsEven(number) ? ++even : ++odd;
  }

  cout << odd << " " << even << endl;
  
  return 0;
}
