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
vector<bool> visited(maxn);

void dfs(int node)
{
    if (visited[node])
    {
        return;
    }
    visited[node] = true;
    for (auto &i : adj[node])
    {
        dfs(i);
    }
}

// Problem's code
void solve()
{
    int n, m;
    cin >> n >> m;
    adj.resize(n);
    visited.assign(n, 0);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int ans = 0;
    vector<int> res;
    res.push_back(1);
    dfs(0);
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            ans++;
            res.push_back(i + 1);
            dfs(i);
        }
    }
    cout << ans << endl;
    for (int i = 0; i < res.size() - 1; i++)
    {
        cout << res[i] << " " << res[i + 1] << endl;
    }
    cout << endl;
}

// Main function
int main()
{
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?