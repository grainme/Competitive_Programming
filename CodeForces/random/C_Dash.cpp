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
If Takahashi's health has become negative, he collapses and stops moving. Otherwise, 
if an item is placed at the point he has moved to, and his health is strictly less than K,
 then he consumes the item there to make his health K.

*/

// Problem's code
void solve() {
    cin >> n >> m >> k >> q;
    string s;
    cin >> s;
    map<pair<int, int>, int> mpp;
    for(int i = 0; i < m; ++i){
        cin >> x >> y;
        mpp[{x,y}]++; 
    }
    pair<int, int> initial;
    initial = {0,0};
    for(auto &i: s){
        if(i=='R'){initial.first++;}
        else if(i=='L'){initial.first--;}
        else if(i=='U'){initial.second++;}
        else{initial.second--;}
        k--;
        if(k<0){
            cout << "No" << endl;
            return;
        }
        if(mpp[initial]!=0 && k<q){
            k = q;
            mpp[initial]--;
        }

    }
    cout << "Yes" << endl;
}

// Main function
int main() {
  fast_io();
  solve();
}