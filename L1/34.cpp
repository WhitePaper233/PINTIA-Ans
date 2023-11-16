#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
  int cnt;
  cin >> cnt;

  vector<int> posts;
  for (int i = 0; i < cnt; ++i) {
    int _cnt;
    cin >> _cnt;
    
    for (int n = 0; n < _cnt; ++n) {
      int post;  
      cin >> post;
      posts.push_back(post);
    }
  }

  set<int> _posts(posts.begin(), posts.end());
  int post_id, post_like = 0;
  for (auto it = _posts.begin(); it != _posts.end(); ++it) {
    int like_cnt = count(posts.begin(), posts.end(), *it);
    if (like_cnt > post_like || (like_cnt == post_like && *it > post_id)) {
      post_like = like_cnt;
      post_id = *it;
    }
  }

  cout << post_id << ' ' << post_like << endl;
  
  return 0; 
}
