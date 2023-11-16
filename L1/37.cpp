#include <cstdio>
using namespace std;

int main() {
  double num_A, num_B;
  scanf("%lf %lf", &num_A, &num_B);

  if (!num_B) {
    printf("%.0lf/0=Error\n", num_A);
    return 0;
  }

  (num_B > 0) ? printf("%.0lf/%.0lf=%.2lf\n", num_A, num_B, num_A / num_B) : printf("%.0lf/(%.0lf)=%.2lf\n", num_A, num_B, num_A / num_B);
  
  return 0;
}
