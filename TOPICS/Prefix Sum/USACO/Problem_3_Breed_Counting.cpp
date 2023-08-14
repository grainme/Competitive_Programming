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

// Problem's code
void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<vector<ll>> pref(n + 1, vector<ll>(3, 0));
    pref[0] = {0, 0, 0};
    for (ll i = 1; i <= n; i++)
    {
        ll id;
        cin >> id;
        if (id == 1)
        {
            pref[i][0] = pref[i - 1][0] + 1;
            pref[i][1] = pref[i - 1][1];
            pref[i][2] = pref[i - 1][2];
        }
        else if (id == 2)
        {
            pref[i][1] = pref[i - 1][1] + 1;
            pref[i][0] = pref[i - 1][0];
            pref[i][2] = pref[i - 1][2];
        }
        else
        {
            pref[i][2] = pref[i - 1][2] + 1;
            pref[i][0] = pref[i - 1][0];
            pref[i][1] = pref[i - 1][1];
        }
    }
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        cout << pref[r][0] - pref[l - 1][0] << " " << pref[r][1] - pref[l - 1][1] << " " << pref[r][2] - pref[l - 1][2] << endl;
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