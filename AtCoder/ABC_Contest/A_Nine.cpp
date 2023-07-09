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

// Problem's code
void solve() {
    map<int, set<int>>mpp;
    mpp[1] = {1,2};
    mpp[2] = {1,3};
    mpp[3] = {2,3};
    mpp[4] = {4,5};
    mpp[5] = {4,5,6};
    mpp[6] = {6,5};
    mpp[7] = {7,8};
    mpp[8] = {7,8,9};
    mpp[9] = {8,9};

    cin >> x >> y;
    if(mpp[x].count(y)!=0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}

// Main function
int main() {
  fast_io();
  solve();
}

// Check Constraints next_permutation?
// Long long or int !?