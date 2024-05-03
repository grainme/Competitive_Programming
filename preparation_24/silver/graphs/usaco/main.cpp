/**
 * Salam Marouane :)
 * ダークホース!
 */

#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;

#define rep(start, end, step) for (int i = start; i < end; i += step)
#define all(v) (v).begin(), (v).end()
#define endl "\n"
#define cin_str(s) getline(cin, s)

// Avoid negative modulo (b + (a % b)) % b

//----------CONSTANTS----------
const ll inf = INT_MAX;
const long long MOD = 1e9 + 7;
#define eps 1e-9

//----------GLOBALS----------

void fast_io() {
  ios::sync_with_stdio(NULL);
  cin.tie(NULL), cout.tie(NULL);
}

int n, m;
const int MAX_N = 3000;

vector<vector<int>> adj(MAX_N);
vector<int> vis(MAX_N);
vector<int> closed(MAX_N);
int nodes = 0;

void dfs(int node) {
  if (vis[node] || closed[node])
    return;
  nodes++;
  vis[node] = true;
  for (int u : adj[node]) {
    if (!vis[u])
      dfs(u);
  }
}

// Problem's code
void solve() {
  freopen("closing.in", "r", stdin);
  freopen("closing.out", "w", stdout);
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  vector<int> ord(n);
  for (int i = 0; i < n; i++)
    cin >> ord[i];

  dfs(1);

  if (nodes == n) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
  for (int i = 0; i < n - 1; i++) {
    nodes = 0;
    closed[ord[i]] = true;
    fill(all(vis), 0);
    dfs(ord[n - 1]);
    if (nodes == n - i - 1) {
      cout << "YES";
    } else {
      cout << "NO";
    }
    cout << endl;
  }
}

// Main function
int main() {
  fast_io();
  solve();
}

// Check Constraints next_permutation?
// Long long or int !?/ Long long or int !?
