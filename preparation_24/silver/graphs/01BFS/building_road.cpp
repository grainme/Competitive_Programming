#include <bits/stdc++.h>
using namespace std;

#define MAX 2e9
#define MIN -2e9
#define INF 1e17
#define PI acos(-1.0)
#define mid(s, e) (s + (e - s) / 2)
#define clz(n) __builtin_clzll(n)
#define nbOfBits(n) __builtin_popcount(n)
#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define pb push_back
#define sz(a) ((int)((a).size()))
#define int long long
#define double long double

// const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};

using vi = vector<int>;
using vvi = vector<vi>;
using vb = vector<bool>;
using vvb = vector<vb>;
using vd = vector<double>;
using vvd = vector<vd>;
using vs = vector<string>;
using pii = pair<int, int>;
using pdd = pair<double, double>;

// main idea : count the number of connected component and link the top of
// components with each other!

// here goes my code :)
void solve() {
  int n, m;
  cin >> n >> m;
  vector<vi> adj(n);
  vb visited(n, false);
  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  vi coins;
  int conn_comps = 0;
  for (int i = 0; i < n; i++) {
    if (!visited[i]) {
      queue<int> q;
      q.push(i);
      while (!q.empty()) {
        int curr_node = q.front();
        q.pop();
        visited[curr_node] = true;
        for (int &neighbor : adj[curr_node]) {
          if (!visited[neighbor]) {
            q.push(neighbor);
          }
        }
      }
      coins.push_back(i);
      conn_comps++;
    }
  }
  cout << conn_comps - 1 << endl;
  for (int i = 0; i < (int)coins.size() - 1; i++) {
    cout << coins[i] + 1 << " " << coins[i + 1] + 1 << endl;
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
