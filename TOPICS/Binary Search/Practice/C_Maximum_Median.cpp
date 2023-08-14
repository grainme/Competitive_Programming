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

ll last_true(ll lo, ll hi, function<bool(ll)> ok)
{
    ll ans = -1;
    while (lo <= hi)
    {
        ll mid = lo + (hi - lo) / 2;
        // V[mid] == solution
        if (ok(mid))
        {
            ans = mid;
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return ans;
}

// Problem's code
void solve()
{
    ll n, max_ops;
    cin >> n >> max_ops;
    vector<ll> V(n);
    for (auto &i : V)
    {
        cin >> i;
    }
    sort(all(V));
    // we binary search this search space [1, 2e9]
    cout << last_true(0, 2e9,

                      [&](ll x)
                      {
                          ll ops_needed = 0;
                          for (ll i = (n - 1) / 2; i < n; i++)
                          {
                              ops_needed += max(0LL, x - V[i]);
                          }
                          return ops_needed <= max_ops;
                          <
                      }

                      )
         << endl;
}

// Main function
int main()
{
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?