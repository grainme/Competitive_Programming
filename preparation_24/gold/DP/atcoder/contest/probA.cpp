#include <bits/stdc++.h>
using namespace std;
template <class T> inline bool chmin(T &a, T b) {
  return (a > b ? a = b, 1 : 0);
}
template <class T> inline bool chmax(T &a, T b) {
  return (a < b ? a = b, 1 : 0);
}
int main() {
  string s;
  cin >> s;
  int res = 0;
  res += (s[3] - '0') * 100;
  res += (s[4] - '0') * 10;
  res += (s[5] - '0');
  if (res >= 1 && res <= 349 && res != 316) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
