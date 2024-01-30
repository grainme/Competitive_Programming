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
    ll n, q;
    cin >> n >> q;
    vector<vector<ll>> pref(n + 1, vector<ll>(n + 1, 0));
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            char x;
            cin >> x;
            ll Tree_Found = 0;
            if (x == '*')
            {
                Tree_Found = 1;
            }
            pref[i][j] = pref[i][j - 1] + pref[i - 1][j] - pref[i - 1][j - 1] + Tree_Found;
        }
    }
    while (q--)
    {
        ll from_row, to_row, from_col, to_col;
        cin >> from_row >> from_col >> to_row >> to_col;
        cout << pref[to_row][to_col] - pref[from_row - 1][to_col] -
                    pref[to_row][from_col - 1] +
                    pref[from_row - 1][from_col - 1]
             << '\n';
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