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
    freopen("lepus.in", "r", stdin);
    freopen("lepus.out", "w", stdout);
}

// Problem's code
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> steps{1, 3, 5};
    vector<pair<int, bool>> dp(n);
    dp[0] = {0, true};
    for (int i = 1; i < n; i++)
    {
        bool f = 0;
        int ans = 0;
        for (auto &c : steps)
        {
            if (i - c >= 0 && s[i] != 'w' && s[i - c] != 'w' && dp[i - c].second)
            {
                f = 1;
                ans = max(ans, dp[i - c].first + (s[i] == '"'));
            }
        }
        dp[i] = {ans, f};
    }
    cout << (dp[n - 1].second ? dp[n - 1].first : -1) << endl;
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