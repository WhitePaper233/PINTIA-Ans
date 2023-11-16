#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  int N, K, M;
  scanf("%d %d %d", &N, &K, &M);
  cout << N - K * M << endl;
  return 0;
}
