/**  /\_/\
*   (= ._.)
*   / > \>
*
* Salam Marouane :)
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
  int t = 1;
  // cin >> t;
  while (t--) {
    int n,k;
    cin >> n >> k;
    set<pair<int, int>> st;
    for(int i = 0; i < n; i++){
        vector<int> V(k);
        for(int j = 0; j < k; j++){
            cin >> V[j];
        }
        for(int j = 0; j < k; j++){
            for(int z = j+1; z < k; z++){
                st.insert(make_pair(V[j], V[z]));
            }
        }
    }
    set<pair<int, int>> pairsToRemove;
    for(auto &i : st){
        if( st.count(make_pair(i.first, i.second))!= 0 && st.count(make_pair(i.second, i.first))!= 0){
            pairsToRemove.insert(make_pair(i.first, i.second));
            pairsToRemove.insert(make_pair(i.second, i.first));
        }
    }
    int ans = 0;
    for(auto &i: st){
        if(pairsToRemove.count(i)==0){
            ans++;
        }
    }
    cout << ans << endl;
  }
}

// Main function
int main() {
  fast_io();
  solve();
}
