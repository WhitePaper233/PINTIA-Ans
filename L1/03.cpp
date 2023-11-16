#include <cstdio>
#include <unordered_map>
#include <string>
#include <iostream>

using namespace std;

int main() {
  string input_num;
  
  unordered_map<char, int> hashMap {
    {'0', 0},
    {'1', 0},
    {'2', 0},
    {'3', 0},
    {'4', 0},
    {'5', 0},
    {'6', 0},
    {'7', 0},
    {'8', 0},
    {'9', 0},
  };

  cin >> input_num;

  for (int index = 0; index < input_num.size(); ++index) {
    hashMap[input_num[index]] = hashMap[input_num[index]] + 1;
  }

  for (short index = 48; index < 58; ++index) {
    if (hashMap[index] != 0) {
      printf("%c:%d\n", index, hashMap[index]);
    }
  }
  
  return 0;
}
