/**  /\_/\
*   (= ._.)
*   / > \>
*
* Salam Marouane :)
* ダークホース!
*  
*/

#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define _USE_MATH_DEFINES
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define debug(x) cout << (#x) << " = " << x << endl
#define rep(start, end, step) for(int i = start; i < end; i += step)
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

void fast_io() {
  ios::sync_with_stdio(NULL);
  cin.tie(NULL), cout.tie(NULL);
}

// Problem's code
void solve() {
    vector<array<ll, 2>> vpr(901);
    array<ll, 2> prev_prev = {1, 0}, prev = {0, 1};
    vpr[1] = prev_prev;
    vpr[2] = prev;
    for(ll i = 3; i < 901; ++i){
        prev_prev = vpr[i-2];
        prev = vpr[i-1];
        array<ll, 2> new_one;
        new_one[0] = prev_prev[0] + prev[0];
        new_one[1] = prev_prev[1] + prev[1];
        vpr[i] = new_one;
        prev_prev = prev;
        prev = new_one;
    }
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        if(k>=901){
            cout << 0 << endl;
            continue;
        }
        array<ll, 2> val = vpr[k];
        ll result = 0;
        for(ll i = 0; i <=n; i++){
            ll temp = (n-val[0]*i);
            if(temp%val[1]==0){
                if(temp/val[1]>=i){
                    result++;
                }
            }
        }
        cout << result << endl;
    }
}

// Main function
int main() {
  fast_io();
  solve();
}

// Check Constraints next_permutation?
// Long long or int !?