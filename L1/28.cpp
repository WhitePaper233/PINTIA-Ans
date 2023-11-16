#include <cmath>
#include <iostream>
using namespace std;

bool IsPrime(unsigned int num) {
  double sqrt_num = sqrt(num);
  for (unsigned int i = 2; i < sqrt_num; ++i) {
    if (num % i == 0) return false; 
  }
  return true;
}

int main() {
  int cnt;
  cin >> cnt;

  unsigned int input_num;
  for (int i = 0; i < cnt; ++i) {
    cin >> input_num;
    (input_num == 0 || input_num == 1) ? cout << "No" : IsPrime(input_num) ? cout << "Yes" : cout << "No";
    cout << endl;
  }
  
  return 0;
}

