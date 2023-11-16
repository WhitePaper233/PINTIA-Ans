#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

bool isInt(string num) {
  bool flag = true;
  for (int i = 0; i < num.size(); ++i) {
    if (num[i] > '9' || num[i] < '0') flag = false;
  }
  return flag;
}

int main() {
  string input, A, B, answer;
  getline(cin, input);
  int divider = input.find_first_of(' ');
  A = input.substr(0, divider);
  B = input.substr(divider + 1);

  if (!isInt(A)) { A = "?"; answer = "?"; }
  if (!isInt(B)) { B = "?"; answer = "?"; }

  int num_A = atoi(A.c_str()), num_B = atoi(B.c_str());
  if (num_A > 1000 || num_A < 1) { A = "?"; answer = "?"; }
  if (num_B > 1000 || num_B < 1) { B = "?"; answer = "?"; }
  
  if (answer != "?") answer = to_string(num_A + num_B);

  cout << A << " + " << B << " = " << answer << endl; 
  
  return 0;
}
