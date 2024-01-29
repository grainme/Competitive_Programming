/**  /\_/\
 *   (= ._.)
 *   / > \>
 *
 * Salam Marouane :)
 * ダークホース!
 *
 */

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define _USE_MATH_DEFINES
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
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

vector<vector<ll>> adj;
vector<bool> visited;
vector<ll> res;
ll sm_dfs = 0;

// Iterative BFS function
void bfs(ll start, map<ll, ll> &mpp)
{
    queue<ll> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty())
    {
        ll node = q.front();
        q.pop();

        sm_dfs += mpp[node];

        for (ll n : adj[node])
        {
            if (!visited[n])
            {
                visited[n] = true;
                q.push(n);
            }
        }
    }
}

// Problem's code
void solve()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> V(n);
        adj = vector<vector<ll>>(n);
        for (auto &i : V)
        {
            cin >> i;
        }
        auto mn = min_element(all(V)) - V.begin();
        V[mn] = 0;
        map<ll, ll> mpp;
        for (ll i = 0; i < n; i++)
        {
            mpp[i] = V[i];
        }
        for (ll i = 0; i < n - 1; i++)
        {
            ll a, b;
            cin >> a >> b;
            adj[--a].push_back(--b);
        }
        visited = vector<bool>(n, false);
        ll sm = 0;
        for (auto &i : adj[0])
        {
            bfs(i, mpp);
            ll ms = mpp[0] + sm_dfs;
            sm += ms;
            sm_dfs = 0;
        }
        cout << sm << endl;

        sm = 0;
        adj.clear();
        visited.clear();
        res.clear();
        sm_dfs = 0;
    }
}

// Main function
int main()
{
    fast_io();
    solve();
}
