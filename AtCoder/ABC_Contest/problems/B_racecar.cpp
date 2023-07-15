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

bool check_palindrome(string s){
    int sz = s.size();
    for(int i = 0; i < sz/2; i++){
        if(s[i] != s[sz-i-1]){
            return false;
        }
    }
    return true;
}

// Problem's code
void solve() {
    cin >> n;
    vector<string> V;
    bool res = false;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        V.push_back(s);
    }
    for(int i = 0; i < n; i++){
        string temp = V[i];
        // k starts from 0 not i+1 :: a+ba is a palindrome BUT ba+a is not a palindrome
        for(int k = 0; k < n; k++){
            if(check_palindrome(temp+V[k]) && i!=k){
                res = true;
                break;
            }
        }
    }
    cout << (res?"Yes":"No") << endl;
}

// Main function
int main() {
  fast_io();
  solve();
}