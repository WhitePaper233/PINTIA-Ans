#include <iostream>
#include <string>

using namespace std;

int main() {
  string input;
  cin >> input;

  int g_cnt = 0, p_cnt = 0, l_cnt = 0, t_cnt = 0;

  for (int i = 0; i < input.size(); ++i) {
    if (input[i] == 'G' || input[i] == 'g') ++g_cnt;
    if (input[i] == 'P' || input[i] == 'p') ++p_cnt;
    if (input[i] == 'L' || input[i] == 'l') ++l_cnt;
    if (input[i] == 'T' || input[i] == 't') ++t_cnt;
  }

  while (g_cnt + p_cnt + l_cnt + t_cnt) {
    if (g_cnt) { cout << 'G'; --g_cnt; }
    if (p_cnt) { cout << 'P'; --p_cnt; } 
    if (l_cnt) { cout << 'L'; --l_cnt; }
    if (t_cnt) { cout << 'T'; --t_cnt; }
  }

  cout << endl;
  
  return 0;
}

