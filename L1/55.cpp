#include <iostream>
using namespace std;

int main() {
  int a_a, b_a;
  cin >> a_a >> b_a;

  int j1, j2, j3;
  cin >> j1 >> j2 >> j3;
  int a_j = 3 - j1 - j2 - j3, b_j = j1 + j2 +j3;

  if (a_a > b_a) {
    if (a_j > 0) cout << "The winner is a: " << a_a << " + " << a_j << endl;
    if (b_j == 3) cout << "The winner is b: " << b_a << " + " << b_j << endl;
  } else {
    if (b_j > 0) cout << "The winner is b: " << b_a << " + " << b_j << endl;
    if (a_j == 3) cout << "The winner is a: " << a_a << " + " << a_j << endl;
  }
  
  return 0;
}
