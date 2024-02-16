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
vector<int> counti(maxn);

void dfs(int node, int prev_node)
{
    counti[node] = 1;
    for (auto &i : adj[node])
    {
        if (i != prev_node)
        {
            dfs(i, node);
            counti[node] += counti[i];
        }
    }
}

// Problem's code
void solve()
{
    int n;
    cin >> n;
    adj.resize(n - 1);
    counti.resize(n + 1);
    vector<int> V(n - 1);
    int k = 2;
    for (auto &i : V)
    {
        cin >> i;
    }

    for (int i = 0; i < n - 1; i++)
    {
        adj[V[i]].push_back(k);
        adj[k].push_back(V[i]);
        k++;
    }
    dfs(1, 0);
    for (int i = 1; i < counti.size(); i++)
    {
        cout << counti[i] - 1 << " ";
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