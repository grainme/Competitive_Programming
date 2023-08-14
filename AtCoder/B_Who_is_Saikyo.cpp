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

// Problem's code
void solve()
{
    int n, m, ans = 0;
    cin >> n >> m;
    map<int, set<int>> mpp;
    vector<pair<int, int>> V;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        V.push_back({a, b});
    }
    sort(all(V), [&](pair<int, int> a, pair<int, int> b)
         { return a.first < b.first; });
    for (auto &i : V)
    {
        int a = i.first, b = i.second;
        for (auto &k : mpp)
        {
            if (k.second.count(a))
            {
                k.second.insert(b);
            }
        }
        mpp[a].insert(b);
    }
    vector<int> res;
    for (auto &i : mpp)
    {

        if (i.second.size() >= n - 1)
        {
            ans++;
            res.push_back(i.first);
        }
    }
    if (ans != 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << res[0] << endl;
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