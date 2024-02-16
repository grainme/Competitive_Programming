/**  /\_/\
 *   (= ._.)
 *   / > \>
 *
 * Salam Marouane :)
 * ダークホース!
 *
 */

#include <bits/stdc++.h>

using namespace std;

#define _USE_MATH_DEFINES
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
template <typename T>
#define debug(x) cout << (#x) << " = " << x << endl
#define rep(start, end, step) for (int i = start; i < end; i += step)
#define all(v) ((v).begin()), ((v).end())
#define rall(v) ((v).rbegin()), ((v).rend())
#define endl "\n"
#define pi M_PI
#define cin_str(s) (getline(cin, s))
// Avoid negative modulo (b + (a % b)) % b

//----------CONSTANTS----------
const ll inf = INT_MAX;
const long long MOD = 1e9 + 7;
#define eps 1e-9
//----------GLOBALS----------

void fast_io()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL), cout.tie(NULL);
}

// void usaco()
//{
//   freopen('div7.in', 'r', stdin);
//   freopen('div7.out', 'w', stdout);
// }

const int maxn = 1e5;
vector<vector<int>> adj(maxn);
vector<pair<bool, int>> visited(maxn);
bool prob = false;

void dfs(int node, int prev_color)
{
    if (visited[node].first)
    {
        if (visited[node].second == prev_color)
        {
            prob = true;
        }
        return;
    }
    visited[node].first = true;
    visited[node].second = (prev_color == 1 ? 2 : 1);

    for (auto &i : adj[node])
    {
        dfs(i, visited[node].second);
    }
}

// Problem's code
void solve()
{
    int n, m;
    cin >> n >> m;
    adj.resize(n);
    visited.assign(n, {0, 0});
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        --a;
        --b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        if (!visited[i].first)
        {
            dfs(i, 2);
        }
    }
    if (prob)
    {
        cout << "IMPOSSIBLE" << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        cout << visited[i].second << " ";
    }
}

// Main function
int main()
{
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?