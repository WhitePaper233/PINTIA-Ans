#include <cstdio>
using namespace std;

int main() {
  int num_a, num_b;
  scanf("%d %d", &num_a, &num_b);

  for (int i = 0; i < num_a + num_b; ++i) printf("Wang!");
  printf("\n");
  
  return 0;
}
