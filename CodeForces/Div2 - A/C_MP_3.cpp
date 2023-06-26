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

// Poblem's code
void solve()
{
  int t=1;
  cin >> t;
  while (t--){
    int n, t;
    cin >> n >> t;
    vi V(n);
    t = 8*t;
    for(auto &i: V){
        cin >> i;
    }
    sort(all(V));
    ll i = 0, max_so_far = 1e18;
    map<int, int> mpp;
    while (i < n)
    {
        mpp[i]++;
        ll res = n * ceil(log2(mpp.size()));
        if(res <= t){
            max_so_far = min(max_so_far, res);
        }
    }
    
  }
}

// Main function
int main()
{
  fast_io(); 
  solve();
}

