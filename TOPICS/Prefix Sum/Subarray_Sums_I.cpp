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
    int n, x;
    cin >> n >> x;
    int r = 0;
    vector<int> V(n);
    for(auto &i: V){
        cin >> i;
    }
    int ans = 0, sum = 0;
    for(int l = 0; l < n; l++){
        while(r < n && sum + V[r] <= x){
            sum += V[r++];
        }
        ans += (sum == x);
        sum -= V[l];
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