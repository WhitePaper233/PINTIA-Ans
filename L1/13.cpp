#include <cstdio>

int fac(int n) {
  if (n > 1) {
    return n * fac(n - 1);
  }
  return 1;
}

int main() {
  int input, sum = 0;

  scanf("%d", &input);

  for (int i = 1; i <= input; ++i) {
    sum += fac(i);
  }

  printf("%d\n", sum);
  
  return 0;
}

