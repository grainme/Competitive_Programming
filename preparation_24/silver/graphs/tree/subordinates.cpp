#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define endl "\n"

int maxn = 2e5;
vector<vector<int>> adj(maxn);
vector<int> _count(maxn, 0);

void dfs(int m, int prev) {
  for (auto &i : adj[m]) {
    if (i != prev) {
      dfs(i, m);
      _count[m] += _count[i] + 1;
    }
  }
}

int main(void) {
  int n;
  cin >> n;
  adj.resize(n);
  _count.resize(n);
  for (int i = 2; i <= n; i++) {
    int x;
    cin >> x;
    adj[i].push_back(x);
    adj[x].push_back(i);
  }
  dfs(1, 0);
  for (int i = 1; i <= n; i++) {
    cout << _count[i] << " ";
  }
  cout << endl;
}
