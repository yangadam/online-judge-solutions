#include<cstdio>
#include<iostream>
#include<set>
using namespace std;

set<string> dict;

int main() {
  #ifndef ONLINE_JUDGE
    freopen("input/uva10391.in", "r", stdin);
  #endif
  string word;
  while (cin >> word) dict.insert(word);
  for (set<string>::iterator it = dict.begin(); it != dict.end(); ++it) {
    for (int i = 1; i < it->length() - 1; ++i)
      if (dict.count(it->substr(0, i)) && dict.count(it->substr(i, it->length() - i))) {
        cout << *it << endl;
        break;
      }
  }
  return 0;
}
