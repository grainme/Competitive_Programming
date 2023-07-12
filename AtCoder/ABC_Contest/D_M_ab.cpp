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

const ll template_array_size = 1e6 + 8432;

// Problem's code
void solve() {
    ll N, M;
    cin >> N >> M;
    ll ans = LLONG_MAX;
    // Gbila guelna bili a khass tkun sgher men racine(M)
    for(ll a = 1; a < min(N, (ll)sqrt(M)+50)+1; a++){
        ll b = M/a;
        // 3iwad ma ntecheckiw bl maths the exact formula we use off variable
        for(ll off = 0; off <=10; off++){
            if((b+off)>=1 && (b+off)<=N && ((b+off)*a)>=M){
                ans = min(ans, (b+off)*a);
            }   
        }
    }
    cout << (ans==LLONG_MAX?-1:ans) << endl;
}

// Main function
int main() {
  fast_io();
  solve();
}

// Check Constraints next_permutation?
// Long long or int !?