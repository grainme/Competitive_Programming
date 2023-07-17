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
void display(vi &a) {
  for(int z : a)
    cout << z << " ";
  cout << endl;
}
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
    int n,m;
    cin >> n >> m;
    set<int> traf_lights{0, n};
    multiset<int> distance{n};
    // Reading the traffic lights
    while(m--){
        int position;
        cin >> position;
        auto right = traf_lights.upper_bound(position);
        auto left = right;
        left--;
        // Insertion of the new traffic lights
        traf_lights.insert(position);
        // Removing the old gap because it has been divided by position
        distance.erase(distance.find(*right - *left));
        // storing the new gaps
        distance.insert(position - *left);
        distance.insert(*right - position);
        // .end() gives the element after the set
        auto max_so_far = distance.end();
        max_so_far--;
        
        cout << *max_so_far << " ";
    }
    cout << endl;
  }
}

// Main function
int main() {
  fast_io();
  solve();
}
