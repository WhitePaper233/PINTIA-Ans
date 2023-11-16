#include <cstdio>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

bool verify(string id) {
  int sum = 0;
  vector<int> weight = { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
  unordered_map<int, char> mapping = {
    {0, '1'},
    {1, '0'},
    {2, 'X'},
    {3, '9'},
    {4, '8'},
    {5, '7'},
    {6, '6'},
    {7, '5'},
    {8, '4'},
    {9, '3'},
    {10, '2'},
  };

  for (int i = 0; i < 17; ++i) sum += weight[i] * (id[i] - '0');

  if (id[17] != mapping[sum % 11]) return false;
  
  return true;
}

int main() {
  int num;
  scanf("%d", &num);

  vector<string> wl;
  string id = "";
  
  for (int i = 0; i < num; ++i) {
    cin >> id;
    wl.push_back(id);
  }

  bool flag = true;
  for (int i = 0; i < wl.size(); ++i) {
    if (!verify(wl[i])) {
      flag = false;
      cout << wl[i] << endl;
    }
  }

  if (flag) cout << "All passed" << endl;
  
  return 0;
}

