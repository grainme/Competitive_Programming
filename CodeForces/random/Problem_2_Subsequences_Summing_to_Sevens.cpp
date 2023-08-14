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



// Problem's code
void solve()
{
    ll n;
    cin >> n;
    vector<ll> pref(n+1);
    ll sum = 0;
    pref[0] = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        sum += x;
        pref[i] = sum%7;
    }

    for(auto &i: pref){
        cout << i << " ";
    }
    cout << endl;
    map<ll, ll> mpp;
    mpp[pref[0]] == 1;
    ll maxi = 0;
    for (ll i = 1; i <= n; i++)
    {
        // cout << "PREF : " << pref[i] << endl;
        if(mpp[pref[i]]==0){
            mpp[pref[i]] = i+1;
        }
        else{
            cout << "pref : " << pref[i] << endl;
            maxi = max(maxi, i - mpp[pref[i]]+1);
            
        }
    }
    cout << maxi << endl;
}

// Main function
int main()
{
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?