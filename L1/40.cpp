#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  int cnt;
  char gender;
  double height;

  cin >> cnt;
  for (int i = 0; i < cnt; ++i) {
    cin >> gender;
    cin >> height;

    (gender == 'M') ? printf("%.2lf\n", height / 1.09) : printf("%.2lf\n", height * 1.09);
  }
  
  return 0;
}

