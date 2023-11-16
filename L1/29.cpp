#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  int h;
  cin >> h;
  
  double std_w = (h - 100) * 0.9 * 2;
  printf("%.1lf\n", std_w);
  
  return 0;
}

