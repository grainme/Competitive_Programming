#include <bits/stdc++.h>

using namespace std;

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mpp;
    for (auto &i : s) {
      mpp[i]++;
    }
    int l = 0, r = n - 1, mx_ever = n;
    while (mpp['c'] + mpp['b'] >= mpp['a']) {
      if (s[r] != 'a') {
        mpp[s[r]]--;
        r -= 1;
      } else if (s[l] != 'a') {
        mpp[s[l]]--;
        l += 1;
      } else {
        mpp[s[l]]--;
        mpp[s[r]]--;
        r -= 1;
        l += 1;
      }

      if (l > r) {
        break;
      }
      mx_ever = r - l + 1;
    }
    if (mx_ever < 2) {
      cout << "-1" << endl;
    } else {
      cout << mx_ever << endl;
    }
  }
}
