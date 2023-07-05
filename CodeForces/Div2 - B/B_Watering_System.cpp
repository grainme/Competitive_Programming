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

ll n, m, k, q, l, r, x, y, z;
const ll template_array_size = 1e6 + 8432;
ll a[template_array_size];
ll b[template_array_size];
ll c[template_array_size];
string s, t;
ll ans = 0;

vector<ll> adj[100005];
bool visited[100005] = {false};

/*

R = (si * A)

input : n , A , B

si : is the size of the non blocked hole (which is always s0)
A  : given as input
S  : Sum of sizes of the non blocked holes 

decrease S while R < B * S , on iteration 00 : S = sum(of si)

1 ->  R = 2 * 10 = 20 && B*S = 3 * S    
2 ->  R = 3 * 80 = 240 && B*S = 20 * S
3 ->  R = 1000 * 10 = 10000 && B*S = 10 * S
4 ->  R = 20 * 300 = 6000 && B*S = 100 * 

LOL : I forgot to write i++ in the while loop ---> it costs me 20 of silly thinking sheeesh

I GOT AC :)
*/

// Problem's code
void solve() {
    cin >> n >> m >> k;
    vector<ll> holes(n);
    ll sum_sizes = 0;
    for(int i = 0; i < n; i++){
        cin >> holes[i];
        sum_sizes += holes[i];
    }
    sort(holes.begin()+1, holes.end());
    ll R = holes[0] * m, i = 0, ans = 0;
    while (R < k * sum_sizes)
    {
        sum_sizes -= holes[n-i-1];
        ans ++;
        i++;
    }
    cout << ans << endl;
}

// Main function
int main() {
  fast_io();
  solve();
}