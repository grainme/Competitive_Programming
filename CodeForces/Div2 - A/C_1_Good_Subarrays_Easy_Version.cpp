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

void fast_io(string name="tests")
{
  ios::sync_with_stdio(NULL);
  cin.tie(NULL), cout.tie(NULL); 
}
 

void solve()
{
  int t=1;
  cin >> t;
  while (t--){
    int n; 
    cin >> n;
    vi V(n);
    for(auto &i: V){
        cin >> i;
    }
    int mn = 0, mx = n-1;
    for(int i = 0; i < n; i++){
        if(V[i] >= i){
            mn = i;
            break;
        }
    }
    for(int i = n-1; i >= 0; i--){
        if(V[i] >= i){
            mx = i;
            break;
        }
    }
    cout << mn << " " << mx << endl;
    int k = mn, l = mx, ans=0;
    while(k < l){
        ans++;
        k++;
        l--;
    }
    // cout << mx - mn +1 << endl;
    cout << "------------\n";
  }
}

// Main function
int main()
{
  fast_io("tests"); 
  solve();
}

