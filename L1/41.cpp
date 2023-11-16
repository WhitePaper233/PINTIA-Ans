#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string input;
  getline(cin, input);

  vector<string> num_vec;

  int last_i = 0;
  for (int i = 0; i < input.size(); ++i) {
    if (input[i] == ' ') {
      num_vec.push_back(input.substr(last_i, i - last_i));
      last_i = i + 1;
    }
  }

  auto it = find(num_vec.begin(), num_vec.end(), "250");
  int index = distance(num_vec.begin(), it);

  cout << index + 1 << endl;
  
  return 0;
}
