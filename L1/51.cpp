#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  double price, discount;
  cin >> price;
  cin >> discount;

  printf("%.2lf", price * discount * 0.1);
  return 0;
}
