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

ll nbr(ll n)
{
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= 6; i++)
        {
            if (k - i >= 0)
            {
                dp[k] += dp[k - i];
                dp[k] %= MOD;
            };
        }
    }
    return dp[n];
}

// Problem's code
void solve()
{
    ll n;
    cin >> n;
    // dp[i] = number of ways to get the sum i
    cout << nbr(n) << endl;
}

// Main function
int main()
{
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?