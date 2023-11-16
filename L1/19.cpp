#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int a_o { a }, b_o { b }, r;
  cin >> r;
  for (int i { 0 }; i < r; ++i) {
    int a_s, a_m, b_s, b_m;
    cin >> a_s >> a_m >> b_s >> b_m;
    int sum { a_s + b_s };
    if (a_m == sum && b_m != sum) --a;
    if (b_m == sum && a_m != sum) --b;
    if (a < 0) {
      cout << "A\n" << b_o - b << endl;
      break;
    }
    if (b < 0) {
      cout << "B\n" << a_o - a << endl;
      break;
    }
  }
  
  return 0;
}

