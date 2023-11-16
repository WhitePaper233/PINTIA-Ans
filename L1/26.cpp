#include <iostream>
#include <string>

using namespace std;

int main() {
  string output = "I Love GPLT";

  for (auto it = output.begin(); it != output.end(); ++it) {
    cout << *it << endl;
  }
  
  return 0;
}
