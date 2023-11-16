#include <cstdio>

using namespace std;

int main() {
  int min, max, ctrl = 0, sum = 0;
  scanf("%d %d", &min, &max);

  for (int n = min; n <= max; ++n) {
    if (ctrl == 5) {
      printf("\n");
      ctrl = 0;
    }
  
    printf("%5d", n);
    
    ++ctrl;
    sum = sum + n;
  }

  printf("\nSum = %d\n", sum);
  
  return 0;
}

