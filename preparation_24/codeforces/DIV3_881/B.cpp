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
    long long sm = 0;
    for (auto &i : V) {
      cin >> i;
      sm += abs(i);
    }
    int ng = 0, x = 0;
    for (int i = 0; i < n; i++) {
      if (V[i] < 0) {
        x++;
      } else if (V[i] > 0) {
        ng += (x > 0);
        x = 0;
      }
    }
    cout << sm << " " << ng + (x > 0) << endl;
  }
}

int main(void) { solve(); }
