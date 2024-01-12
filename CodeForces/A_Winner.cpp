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

// Problem's code
void solve()
{
    ll t;
    cin >> t;
    map<string, ll> mpp;
    vector<pair<string, ll>> V;
    for (ll i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        ll n;
        cin >> n;
        V.push_back({s, n});
    }
    for (ll i = 0; i < t; i++)
    {
        mpp[V[i].first] += V[i].second;
    }
    ll mx_pts = -10000;
    for (auto &i : mpp)
    {
        mx_pts = max(mx_pts, i.second);
    }

    map<string, ll> mpp1;

    for (ll i = 0; i < t; i++)
    {
        mpp1[V[i].first] += V[i].second;
        if (mpp1[V[i].first] >= mx_pts && mpp[V[i].first] == mx_pts)
        {
            cout << V[i].first << endl;
            return;
        }
    }

    // cout << mx_pts << endl;
}

// Main function
int main()
{
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?