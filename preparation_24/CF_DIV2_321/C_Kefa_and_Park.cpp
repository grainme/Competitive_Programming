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

const int maxn = 1e5;
vector<vector<int>> adj(maxn);
vector<bool> visited(maxn, 0);
vector<int> V(maxn + 1);
vector<int> cat_so(maxn + 1);
ll ans = 0;

void dfs(int node, int e, int cats_so_far, int mx_cats)
{
    int flag = 1;

    if (cats_so_far > mx_cats)
    {
        return;
    }
    for (auto u : adj[node])
    {
        if (u != e)
        {
            flag = 0;
            if (V[u] == 1)
            {
                cat_so[u] = cats_so_far + 1;
                dfs(u, node, cats_so_far + 1, mx_cats);
            }
            else
            {
                cat_so[u] = cats_so_far;
                dfs(u, node, 0, mx_cats);
            }
        }
    }

    if (flag == 1)
    {
        if (cat_so[node] <= mx_cats)
        {
            ans++;
        }
    }
}

// Problem's code
void solve()
{
    int n, m;
    cin >> n >> m;
    adj.resize(n);
    visited.resize(n);
    V.resize(n + 1);
    cat_so.resize(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        V[i] = x;
    }
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cat_so[1] = V[1];
    dfs(1, 0, V[1], m);
    cout << ans << endl;
}

// Main function
int main()
{
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?