#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

bool IsNegative(string num) {
  if (num[0] == '-') return true;
  return false; 
}

bool IsEven(string num) {
  if ((num[num.size() - 1] - '0') % 2 == 0) return true;
  return false; 
}

int main() {
  string input;
  cin >> input;

  float count = 0, size = input.size();
  bool is_negative = IsNegative(input), is_even = IsEven(input);

  for (int i = 0; i < input.size(); ++i) {
    if (input[i] == '-') {
      size -= 1;
      continue; 
    }

    if (input[i] == '2') count += 1;
  }

  float percentage = count / size * 100;
  if (is_even) percentage *= 2;
  if (is_negative) percentage *= 1.5;

  printf("%.2f%%\n", percentage);
  
  return 0;
}
