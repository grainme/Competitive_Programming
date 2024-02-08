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

void usaco()
{
    freopen("balls.in", "r", stdin);
    freopen("balls.out", "w", stdout);
}

// Problem's code
void solve()
{
    int t;
    cin >> t;
    const int MAXN = 3e5 + 7;
    while (t--)
    {
        int n;
        cin >> n;
        // dp[i] is the number of the cannonballs in the i-th pos
        // I guess the problem : dp[i] is the min number of pyramids to get to n from the new formed array
        vector<ll> res;
        res.push_back(1);
        ll sum_so_far = 1;
        for (ll i = 1; i <= MAXN; i++)
        {
            ll ans = res[i - 1] + (i + 1) * (i + 2) / 2;
            res.push_back(ans);
            if (ans >= n)
            {
                break;
            }
        }
        vector<ll> dp(MAXN, 0);
        dp[0] = 0;
        for (ll i = 1; i <= n; i++)
        {
            ll min_way = inf;
            for (auto &c : res)
            {
                if (i - c >= 0)
                {
                    min_way = min(min_way, dp[i - c] + 1);
                }
            }
            dp[i] = min_way;
        }

        cout << dp[n] << endl;
    }
}

// Main function
int main()
{
    // usaco();
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?