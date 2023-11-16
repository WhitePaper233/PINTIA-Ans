#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

struct Seat {
  long long int id;
  int ts;
  int es;
};

int main() {
  int count;
  scanf("%d", &count);

  vector<Seat> nfo;

  for (int i = 0; i < count; ++i) {
    int ts, es;
    long long int id;
    scanf("%lld %d %d", &id, &ts, &es);
    struct Seat seat_nfo={id, ts, es}; 
    nfo.insert(nfo.end(), { seat_nfo });
  }

  int q_count;
  scanf("%d", &q_count);

  vector<int> q_queue;
  for (int i = 0; i < q_count; ++i) {
    int q_ts;
    cin >> q_ts;
    q_queue.insert(q_queue.end(), { q_ts });
  }

  auto q_it = q_queue.begin();
  while (q_it != q_queue.end()) {
    for (int i = 0; i < nfo.size(); i++) {
      if (*q_it == nfo[i].ts) {
        printf("%lld %d\n", nfo[i].id, nfo[i].es);
      }
    }
    q_it++;
  }
  
  return 0;
}
