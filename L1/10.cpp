#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

int main() {
  int n1, n2, n3;
  scanf("%d %d %d", &n1, &n2, &n3);

  vector<int> vec = {n1, n2, n3};
  sort(vec.begin(), vec.end());

  for (auto it = vec.begin(); it != vec.end(); it++) {
    printf("%d", *it);
    if (it != --vec.end()) {
      printf("->");
    }
  }

  printf("\n");

  return 0;
}

