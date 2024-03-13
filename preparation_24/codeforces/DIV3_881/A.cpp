#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solve() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> V(n);
    for (auto &i : V) {
      cin >> i;
    }
    sort(V.begin(), V.end());
    long long sm = 0;
    int i = 0, j = n - 1;
    while (i < j) {
      sm += V[j--] - V[i++];
    }
    cout << sm << endl;
  }
}

int main(void) {
  solve();
  return 0;
}
