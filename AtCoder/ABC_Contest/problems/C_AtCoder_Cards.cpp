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
    cin >> s >> t;
    map<char, int> mp1,mp2;
    set<char> st1({'a','t','c','o','d','e','r'});
    for(auto &i: s){
        mp1[i]++;
    }
    for(auto &i: t){
        mp2[i]++;
    }
    set<char>st;
    for(auto &i: s){
        st.insert(i);
    }
    for(auto &i: t){
        st.insert(i);
    }
    // {a,t,@}
    for(auto &i: s){
        if(i!='@' && st1.count(i)!=0){
            if(mp1[i]<mp2[i]){
                if(mp1['@']>0){
                    mp1[i]++;
                    mp1['@']--;
                }
            }
            else if(mp2[i]<mp1[i]){
                if(mp2['@']>0){
                    mp2[i]++;
                    mp2['@']--;
                }
            }
        }
    }
    
    for(auto &i: t){
        if(i!='@' && st1.count(i)!=0){
            if(mp1[i]<mp2[i]){
                if(mp1['@']>0){
                    mp1[i]++;
                    mp1['@']--;
                }
            }
            else if(mp2[i]<mp1[i]){
                if(mp2['@']>0){
                    mp2[i]++;
                    mp2['@']--;
                }
            }
        }
    }
    for(auto &i: st){
        if(mp1[i]!=mp2[i]){
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}

// Main function
int main() {
  fast_io();
  solve();

}

// Check Constraints next_permutation?
// Long long or int !?


/*

atcoder



ch@ku@ai --> chakudai 
choku@@i --> chokudai 




*/



