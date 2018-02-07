#include<cstdio>
#include<iostream>
#include<queue>
using namespace std;

int main() {
  #ifndef ONLINE_JUDGE
    freopen("input/uva10935.in", "r", stdin);
  #endif
  int n;
  while (cin >> n && n) {
    queue<int> cards;
    cout << "Discarded cards:";
    for (int i = 1; i <= n; ++i) cards.push(i);
    while (cards.size() > 2) {
      cout << " " << cards.front() << ","; cards.pop();
      cards.push(cards.front()); cards.pop();
    }
    if (cards.size() == 2) cout << " " << cards.front();
    cout << endl << "Remaining card: " << cards.back() << endl;
  }
  return 0;
}
