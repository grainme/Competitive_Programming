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
    ll n, m;
    cin >> n >> m;
    vector<ll> A, B;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        A.push_back(x);
    }

    for (ll i = 0; i < m; i++)
    {
        ll x;   
        cin >> x;
        B.push_back(x);
    }

    ll res = 0;
    for (auto &i : A)
    {
        ll diff = 2e9;
        auto ind = lower_bound(all(B), i);
        if(ind != B.end()){
            diff = min(diff, *ind - i);
        }
        if(ind != B.begin()){
            diff = min(diff, i - *ind);
        }
        res = max(res, diff);
    }
    cout << res << endl;
}

// Main function
int main()
{
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?