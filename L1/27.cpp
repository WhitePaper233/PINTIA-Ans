#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string input;
  vector<char> num_vec;

  cin >> input;
  for (int i = 0; i < input.size(); ++i) {
    auto it = find(num_vec.begin(), num_vec.end(), input[i]);
    if (it == num_vec.end()) num_vec.push_back(input[i]);
  }
  sort(num_vec.begin(), num_vec.end());
  reverse(num_vec.begin(), num_vec.end());

  vector<int> index_vec;
  for (int i = 0; i < input.size(); ++i) {
    auto it = find(num_vec.begin(), num_vec.end(), input[i]);
    index_vec.push_back(distance(num_vec.begin(), it));    
  }

  cout << "int[] arr = new int[]{";
  for (auto it = num_vec.begin(); it != num_vec.end(); ++it) {
    cout << *it;
    if (it != --num_vec.end()) cout << ",";
  }
  cout << "};\n";

  cout << "int[] index = new int[]{";
  for (auto it = index_vec.begin(); it != index_vec.end(); ++it) {
    cout << *it;
    if (it != --index_vec.end()) cout << ",";  
  }
  cout << "};\n";
  
  return 0;
}

