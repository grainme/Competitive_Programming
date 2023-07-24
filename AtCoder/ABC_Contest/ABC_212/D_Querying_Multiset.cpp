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
    ll t, ans = 0;
    cin >> t;
    priority_queue<ll, vector<ll>, greater<>> pq;
    while(t--){
        ll a;
        cin >> a;
        if(a==1){
            ll b;
            cin >> b;
            // we substract ans in case Query 2 is placed before pushing to the queue
            pq.push(b-ans);
        }
        else if(a==2){
            ll b;
            cin >> b;
            ans += b;
        }
        else {
            cout << pq.top() + ans << endl;
            pq.pop();
        }
    }
}

// Main function
int main() {
  fast_io();
  solve();
}

// Check Constraints next_permutation?
// Long long or int !?