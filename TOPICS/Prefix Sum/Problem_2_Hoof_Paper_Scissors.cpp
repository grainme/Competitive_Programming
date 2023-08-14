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
    freopen("hps.in", "r", stdin);
    freopen("hps.out", "w", stdout);
}

// Problem's code
void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> pref(n + 1, vector<ll>(3, 0));
    map<ll, ll> mpp;
    map<ll, vector<ll>> mpp_ind;
    mpp['H' - 'A'] = 0;
    mpp['P' - 'A'] = 1;
    mpp['S' - 'A'] = 2;

    for (ll i = 1; i <= n; i++)
    {
        char c;
        cin >> c;
        pref[i] = pref[i - 1];
        pref[i][mpp[c - 'A']]++;
        mpp_ind[mpp[c - 'A']].push_back(i);
    }

    // Nakhdu lmax f lpref[n];
    ll max_ind = 0;
    for (ll i = 0; i < 3; i++)
    {
        if (pref[n][i] > pref[n][max_ind])
        {
            max_ind = i;
        }
    }
    ll awel = mpp_ind[max_ind][0], akhir = mpp_ind[max_ind][mpp_ind[max_ind].size() - 1];
    ll mx_awel = -1, mx_akhir = -1;
    for (ll i = 0; i < 3; i++)
    {
        if (i != max_ind)
        {
            mx_awel = max(mx_awel, pref[awel - 1][i] - pref[0][i]);
            mx_akhir = max(mx_akhir, pref[n][i] - pref[akhir][i]);
        }
    }
    cout << max(mx_awel, mx_akhir) + pref[n][max_ind] << endl;
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