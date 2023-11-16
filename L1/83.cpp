#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  int forb, accp, a1, a2;
  cin >> forb >> accp >> a1 >> a2;
  
  if (a1 >= forb && a2 >= forb) cout << a1 << "-Y " << a2 << "-Y\n" << "huan ying ru guan";
  else if (a1 < forb && a2 < forb) cout << a1 << "-N " << a2 << "-N\n" << "zhang da zai lai ba";
  else if (a1 >= accp && a2 < forb) cout << a1 << "-Y " << a2 << "-Y\n" << "qing 1 zhao gu hao 2";
  else if (a1 < forb && a2 >= accp) cout << a1 << "-Y " << a2 << "-Y\n" << "qing 2 zhao gu hao 1";
  else if (a1 >= forb && a1 < accp && a2 < forb) cout << a1 << "-Y " << a2 << "-N\n" << "1: huan ying ru guan";
  else if (a2 >= forb && a2 < accp && a1 < forb) cout << a1 << "-N " << a2 << "-Y\n" << "2: huan ying ru guan";
  cout << endl;  
  return 0;
}

