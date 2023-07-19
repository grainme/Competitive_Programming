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
    int n, k;
    cin >> n >> k;
    vector<int> V(n);
    for(auto &i: V){
        cin >> i;
    }
    map<int, int> mpp;
    ll l = 0, r = 0, distinct = 0, ans = 0;
    while(l < n){
        while(r < n && (distinct + (mpp[V[r]]==0)) <= k){
            mpp[V[r]]++;
            if(mpp[V[r]]==1){
                distinct++;
            }
            r++;
        }
        ans += (r-l);
        mpp[V[l]]--;
        if(mpp[V[l]]==0){
            distinct--;
        }
        l++;
    }
    cout << ans << endl;
}

// Main function
int main() {
  fast_io();
  solve();
}

// Check Constraints next_permutation?
// Long long or int !?