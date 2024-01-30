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

// Key Idea
// a subarray is good if its sum is equal to its length
// which means pref[r] - pref[l] = l - r
// this is not codable in one for loop because to variables in each side of the equation
// so we need to transform as pref[r] - r = pref[l] - l
// and that is the solution ladies and gentelmen, don't foreget mpp[0]=1 (because the pref start with 0)

// Problem's code
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vector<ll> V;
        for (auto &i : s)
        {
            V.push_back(i - '0');
        }
        vector<ll> pref(n + 1, 0);
        for (ll i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1] + V[i - 1];
        }
        map<ll, ll> mpp;
        mpp[0]++;
        ll ans = 0;
        for (ll i = 1; i <= n; i++)
        {
            mpp[pref[i] - i]++;
        }
        for (auto &i : mpp)
        {
            ans += i.second * (i.second - 1) / 2;
        }
        cout << ans << endl;
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