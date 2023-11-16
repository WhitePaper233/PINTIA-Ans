#include <iostream>
using namespace std;

int main() {
  int cnt;
  cin >> cnt;
  for (int i { 0 }; i < cnt; ++i) {
    int n;
    cin >> n;

    int nf { 0 }, nb { 0 };
    for (int j { 0 }; j < 3; ++j) {
      nb += n % 10;
      n /= 10;
    }
    for (int j { 0 }; j < 3; ++j) {
      nf += n % 10;
      n /= 10;
    }
    if (nb == nf) cout << "You are lucky!" << endl;
    else cout << "Wish you good luck." << endl;
  }
  
  return 0;
}
