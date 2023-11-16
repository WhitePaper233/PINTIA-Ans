#include <cstdio>

int main() {
  int exp, res = 1;

  scanf("%d", &exp);

  for (int i = 0; i < exp; ++i) {
    res = res * 2;
  }

  printf("2^%d = %d\n", exp, res);
  
  return 0;
}

