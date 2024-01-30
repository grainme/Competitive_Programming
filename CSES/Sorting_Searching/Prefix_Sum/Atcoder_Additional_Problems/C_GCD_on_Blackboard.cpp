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

// Key Idea : To speed up the process , we can calculate the GCDs of every prefix and suffix.

// Problem's code
void solve()
{
    int n;
    cin >> n;
    vector<int> V(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> V[i];
    }
    vector<int> pref(n + 1, 0), suff(n + 2, 0);

    for (int i = 1; i <= n; ++i)
    {
        pref[i] = __gcd(pref[i - 1], V[i - 1]);
    }

    for (int i = n; i >= 1; --i)
    {
        suff[i] = __gcd(suff[i + 1], V[i - 1]);
    }

    int res = 1;
    for (int i = 1; i <= n; ++i)
    {
        res = max(res, __gcd(pref[i - 1], suff[i + 1]));
    }
    cout << res << endl;
}

// Main function
int main()
{
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?