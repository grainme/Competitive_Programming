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

ll first_ans(ll lo, ll hi, function<bool(ll)> ok)
{
    ll ans = 0;
    while (lo <= hi)
    {
        ll mid = (lo+hi)/2;
        if (ok(mid))
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return ans;
}

// Problem's code
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> seller(n), buyer(m);
    for (auto &i : seller)
    {
        cin >> i;
    }
    for (auto &i : buyer)
    {
        cin >> i;
    }
    sort(all(seller));
    sort(all(buyer));

    cout << first_ans(1, 1e9 + 1, [&](ll x)
                      {
        ll b = 0, s = 0;
        for(ll i = 0; i < n; i++){
            if(seller[i] <= x){
                s++;
            }
        }
        for(ll i = 0; i < m; i++){
            if(buyer[i] >= x){
                b++;
            }
        }
        return s >= b; })
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