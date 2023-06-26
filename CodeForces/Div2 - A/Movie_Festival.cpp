/**  /\_/\
*   (= ._.)
*   / > \>
* 
* Salam Marouane :)
**/

#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << (#x) << " = " << x << endl
#define _USE_MATH_DEFINES
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
#define rep(start,end,step) for(int i = start; i < end; i+=step)
#define all(v)       ((v).begin()), ((v).end())
#define rall(v)      ((v).rbegin()), ((v).rend())
#define endl "\n"
#define pi M_PI
#define cin_str(s)   (getline(cin, s)) 

//----------CONSTANTS----------
const ll inf = INT_MAX;
const long long MOD = 1e9 + 7;
#define eps 1e-9
//----------GLOBALS----------

void fast_io()
{
  ios::sync_with_stdio(NULL);
  cin.tie(NULL), cout.tie(NULL); 
}

bool comp(pair<int, int> p1, pair<int, int> p2){
    return p1.second <= p2.second;
}

// Poblem's code
void solve()
{
  int t=1;
//   cin >> t;
  while (t--){
    vector<ll> q;
    q.push_back(0);
    vector<pair<ll, ll>> V;
    int n;
    cin >> n;
    set<ll> st;
    while(n--){
        ll a,b;
        cin >> a >> b;
        V.push_back(make_pair(a, b));
        st.insert(b);
    }
    if(st.size()>1){
        sort(all(V), comp);
    }
    ll ans = 0;
    for(auto &i: V){
        if(i.first >= q.back()){
            q.push_back(i.second);
            ans++;
        }
    }
    cout << ans << endl;
  }
}

// Main function
int main()
{
  fast_io(); 
  solve();
}

