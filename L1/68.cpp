#include <cstdio>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
  int cnt;
  cin >> cnt;
  vector<double> rn;
  
  for (int i = 0; i < cnt; ++i) {
    double num;
    cin >> num;
    rn.push_back(1.0 / num);
  }

  double sum = accumulate(rn.begin() ,rn.end(), 0.0);
  double avarage = sum / rn.size();
  printf("%.2lf\n", 1.0 / avarage);
  
  return 0;
}
