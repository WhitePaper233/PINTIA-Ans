#include <cstdio>
using namespace std;

int main() {
  int type;
  double dr, rr;
  scanf("%lf %d %lf", &dr, &type, &rr);

  double lrr =  type ? dr * 1.26 : dr * 2.455;
  (lrr >= rr) ? printf("%.2lf T_T\n", lrr) : printf("%.2lf ^_^\n", lrr);
  
  return 0;
}

