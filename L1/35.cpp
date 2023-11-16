#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<string> name_list;
  while (true) {
    string name;
    cin >> name;
    if (name == ".") break;
    name_list.push_back(name);
  }

  if (name_list.size() < 2) cout << "Momo... No one is for you ..." << endl;
  else if (name_list.size() < 14) cout << name_list[1] << " is the only one for you..." << endl;
  else cout << name_list[1] << " and " << name_list[13] << " are inviting you to dinner..." << endl; 
  
  return 0;
}

