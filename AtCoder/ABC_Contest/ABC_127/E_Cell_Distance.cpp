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
// Avoid negative MODulo (b + (a % b)) % b

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

#define forn(l, r, n) for (int i = r; i <= n; i++)
#define forn_(l, r, n) for (int i = r; i >= n; i--)
ll n, m, k;
ll qpow(ll x, ll y)
{
    ll res = 1;
    while (y)
    {
        if (y & 1)
            res = res * x % MOD;
        y >>= 1;
        x = x * x % MOD;
    }
    return res;
}

// Problem's code
ll c(ll x, ll y)
{
    ll sum1 = 1, sum2 = 1;
    forn_(i, x, x - y + 1) sum1 = sum1 * i % MOD;
    forn(i, 1, y) sum2 = sum2 * i % MOD;

    return sum1 * qpow(sum2, MOD - 2) % MOD;
}
void solve()
{
    cin >> n >> m >> k;
    ll ans = 0;
    forn(i, 1, n - 1) ans = (ans + i * (n - i) % MOD * m * m % MOD) % MOD;

    forn(i, 1, m - 1) ans = (ans + i * (m - i) % MOD * n * n % MOD) % MOD;

    ll res = ans * c(n * m - 2, k - 2) % MOD;
    cout << res;
}

// Main function
int main()
{
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?