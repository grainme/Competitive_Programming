/**  /\_/\
 *   (= ._.)
 *   / > \>
 *
 * Salam Marouane :)
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
    int n, l, r, x, ans=0;
    cin >> n >> l >> r >> x;
    vector<int> A(n);
    for (auto &i : A)
    {
        cin >> i;
    }
    for (int mask = 0; mask < (1 << n); mask++)
    {
        vi V;
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                V.push_back(A[i]);
            }
        }
        ll mx = (ll)(-1e9-6), mn = (ll)(1e9+6), sm=0;
        for(auto &b: V){
            if(b >= mx){
                mx = b;
            }
            if(b <= mn){    
                mn = b;
            }
            sm += b;
        }
        if(mx-mn >= x && sm>=l && sm<=r){
            ans++;
        }
    }
    cout << ans << endl;
}

// Main function
int main()
{
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?
