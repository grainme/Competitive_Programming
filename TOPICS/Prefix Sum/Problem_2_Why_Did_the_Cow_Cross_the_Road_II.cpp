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
    freopen("maxcross.in", "r", stdin);
    freopen("maxcross.out", "w", stdout);
}

// Problem's code
void solve()
{
    int n, k, b;
    cin >> n >> k >> b;
    vector<ll> V(n, 1);
    vector<ll> pref(n + 1, 0);

    for (int i = 0; i < b; i++)
    {
        int x;
        cin >> x;
        V[x - 1] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + V[i - 1];
    }

    ll mn = k;
    for (int i = k; i <= n; i++)
    {
        mn = min(mn, k - (pref[i] - pref[i - k]));
    }

    cout << mn << endl;
}

// Main function
int main()
{
    usaco();
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?