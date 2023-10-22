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

bool ok(int c, int m, int x, ll mid)
{
    ll s = 0;
    ll c_r = c - mid, m_r = m - mid, x_r = x - mid;
    if (c_r >= 0 && m_r >= 0)
    {
        s += c_r + m_r;
        if (x_r >= 0 || s >= abs(x_r))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return false;
}

// Problem's code
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c, m, x;
        cin >> c >> m >> x;
        ll lo = 1, hi = 1e9, mid;
        while (lo <= hi)
        {
            mid = (lo + hi) / 2;
            if (ok(c, m, x, mid))
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        cout <<  hi << endl;
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