#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  double w, h;
  cin >> w >> h;
  
  double res { w / pow(h, 2) };

  if (res > 25) printf("%.1lf\nPANG\n", res);
  else printf("%.1lf\nHai Xing\n", res);
  
  return 0;
}

