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

-> We want to minimize S (the number)
-> We are allowed to change at most k digits
-> We should not end up with leading zeros

IDEA :
-> First element to 1 (unless n = 1)
-> change the kth elements from left to right excluding the first element to 1
-> case if n==1 --> then we output 0


*/


// Problem's code
void solve() {
    cin >> n >> k;
    cin >> s;
    vi V(n);
    for(int i = 0; i < n; i++){
        V[i] = s[i]-'0';
    }
    if(k >=1){
        if(n>1){
            if(V[0]!=1){
                V[0] = 1;
                k--;
            }
        }
        else{
            cout << 0 << endl;
            return;
        }

    }
    else{
        cout << n << endl;
        return;
    }
    if(n>1){
        int i = 1;
        while(k>0 && i < n){
            if(V[i] != 0){
                V[i] = 0;
                k--;
            }
            i++;
        }
    }
    for(auto &i: V){
        cout << i;
    }
}

// Main function
int main() {
  fast_io();
  solve();
}