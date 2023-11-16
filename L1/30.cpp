#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct student {
  int gender;
  string name;
};

int main() {
  int cnt;
  cin >> cnt;

  vector<string> female_vec;
  vector<string> male_vec;
  vector<student> rank;

  int gender;
  string name;
  for (int i = 0; i < cnt; ++i) {
    cin >> gender;
    cin >> name;
    rank.push_back(student{gender, name});
    gender ? male_vec.push_back(name) : female_vec.push_back(name);
  }
  
  int male_ptr = male_vec.size() - 1, female_ptr = female_vec.size() - 1;

  for (int i = 0; i < cnt / 2; ++i) {
    if (rank[i].gender) {
      cout << rank[i].name << ' ' << female_vec[female_ptr] << endl;
      --female_ptr;
      continue;
    }
    cout << rank[i].name << ' ' << male_vec[male_ptr] << endl;
    --male_ptr;
  }
  
  return 0;
}

