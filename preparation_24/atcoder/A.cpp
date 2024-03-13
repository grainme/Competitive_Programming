#include <bits/stdc++.h>

using namespace std;

int main(void) {
  string t;
  cin >> t;
  string res = "";
  int n = t.size();
  pair<int, int> p = {-1, -1};
  for (int i = 0; i < n; i++) {
    if (t[i] == '|' && p.first == -1) {
      p.first = i;
    } else if (t[i] == '|') {
      p.second = i;
    }
  }
  cout << t.substr(0, p.first) << t.substr(p.second + 1, n) << endl;
}
