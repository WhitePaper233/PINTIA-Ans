#include <cstdio>

int get_half_round(int num) {
  if (num % 2 != 0) return num / 2 + 1;
  return num / 2;  
}

int main() {
  int length;
  char symbol;

  scanf("%d %c", &length, &symbol);
  for (int i = 0; i < get_half_round(length); ++i) {
    for (int n = 0; n < length; ++n) {
      printf("%c", symbol);
    }
    printf("\n");
  }
  
  return 0;
}

