#include <iostream>

using namespace std;

int main() {
  int cnt, gender, h, w;
  cin >> cnt;

  for (int i = 0; i < cnt; ++i) {
    scanf("%d %d %d", &gender, &h, &w);

    int h_std = (gender) ? 130 : 129, w_std = (gender) ? 27 : 25;
    int h_diff = h - h_std, w_diff = w - w_std;

    (h_diff >= 0) ? (h_diff) ? cout << "ni li hai!" : cout << "wan mei!" : cout << "duo chi yu!";
    cout << ' ';

    (w_diff >= 0) ? (w_diff) ? cout << "shao chi rou!" : cout << "wan mei!" : cout << "duo chi rou!";
    cout << endl;
  }
  
  return 0;
}
