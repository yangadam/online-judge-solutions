#include<cstdio>
#include<iostream>
#include<set>
using namespace std;

struct Point {
  int x, y;
  Point(int x=0, int y=0):x(x),y(y) {}
  bool operator < (const Point& rhs) const {
    return x < rhs.x || !(x > rhs.x) && y < rhs.y;
  }
};

set<Point> points;

bool isSymmetric(int len) {
  for (set<Point>::iterator it = points.begin(); it != points.end(); ++it) {
    Point right(len - it->x, it->y);
    if (!points.count(right)) return false;
  }
  return true;
}

int main() {
  #ifndef ONLINE_JUDGE
    freopen("input/uva1595.in", "r", stdin);
  #endif
  int T;
  cin >> T;
  while (T--) {
    int n, x, y, minx = 10000, maxx = -10000, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> x >> y;
      if (x < minx) minx = x;
      if (x > maxx) maxx = x;
      points.insert(Point(x, y));
    }
    cout << (isSymmetric(maxx + minx) ? "YES" : "NO") << endl;
    points.clear();
  }
  return 0;
}
