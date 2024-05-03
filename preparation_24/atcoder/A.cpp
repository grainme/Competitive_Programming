#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(void) {
  int n;
  cin >> n;
  vector<string> v, p;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    v.push_back(s);
  }
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    p.push_back(s);
  }
  for (int i = 0; i < n; i++) {
    for (int k = 0; k < n; k++) {
      if (p[i][k] != v[i][k]) {
        cout << ++i << " " << ++k << endl;
        break;
      }
    }
  }
}
