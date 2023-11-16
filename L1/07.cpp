#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
  unordered_map<char, string> hash_map = {
    {'0', "ling"},
    {'1', "yi"},
    {'2', "er"},
    {'3', "san"},
    {'4', "si"},
    {'5', "wu"},
    {'6', "liu"},
    {'7', "qi"},
    {'8', "ba"},
    {'9', "jiu"},
    {'-', "fu"},
  };

  string input_num;
  cin >> input_num;

  for (int i = 0; i < input_num.size(); i++) {
    if (i != input_num.size() - 1) {
      cout << hash_map[input_num[i]] << " ";
    } else {
      cout << hash_map[input_num[i]] << endl;
    }
  }
    
  return 0;
}
