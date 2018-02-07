#include<cstdio>
#include<iostream>
#include<queue>
using namespace std;

struct Job {
  int seq, priority;
  Job(int seq, int priority): seq(seq), priority(priority) {}
};

int main() {
  #ifndef ONLINE_JUDGE
    freopen("input/uva12100.in", "r", stdin);
  #endif
  int T, n, m, p;
  cin >> T;
  while (T--) {
    queue<Job> jobs;
    priority_queue<int> priorities;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
      cin >> p;
      jobs.push(Job(i, p));
      priorities.push(p);
    }
    int time = 0;
    while (jobs.size()) {
      int max = priorities.top();
      while (jobs.front().priority != max) {
        jobs.push(jobs.front());
        jobs.pop();
      }
      ++time;
      if (jobs.front().seq == m) break;
      priorities.pop();
      jobs.pop();
    }
    cout << time << endl;
  }
  return 0;
}
