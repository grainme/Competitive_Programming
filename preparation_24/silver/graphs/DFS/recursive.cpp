/*
 * Problem's Name : Building Roads
 * Problem Test : https://cses.fi/problemset/task/1666
 * Time Complexity : O(n+m) where "n" is the number of node and "m" is the
 * number of edges The idea behind DFS is to go as deep into the graph as
 * possible and backtrack once you are at a vertex without any unvisited
 * adjacent vertices.
 */

#include <bits/stdc++.h>
#include <vector>
using namespace std;

// we can use also a matrix instead of adjacency list
const int maxn = 1e5;
vector<vector<int>> adj;
vector<bool> visited;

void dfs(int node) {
  if (visited[node])
    return;
  visited[node] = true;
  for (int &i : adj[node]) {
    dfs(i);
  }
}

// main idea of this problem is to compute the number of connected components
int main(void) {
  int n, m;
  cin >> n >> m;
  adj.resize(n + 1);
  visited.assign(n + 1, 0);
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  vector<int> res;
  for (int i = 1; i <= n; i++) {
    if (!visited[i]) {
      dfs(i);
      res.push_back(i);
    }
  }
  cout << (int)res.size() - 1 << endl;
  for (int i = 0; i < (int)res.size() - 1; i++) {
    cout << res[i] << " " << res[i + 1] << endl;
  }
}
