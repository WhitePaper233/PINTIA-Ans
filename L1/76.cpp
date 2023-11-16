#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  int cnt, op;
  cin >> cnt; cin >> op;

  for (int i = 0; i < cnt; ++i) {
    double price;
    cin >> price;
    if (price < op) printf("On Sale! %.1lf\n", price);
  }
  
  return 0;
}
