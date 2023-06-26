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

ll fib(ll N){return round(pow((1 + sqrt(5)) / 2, N) / sqrt(5));}


// Poblem's code
void solve()
{
  int t=1;
  // cin >> t;
  while (t--){
    int n;
    cin >> n;
    vector<ll> V;
    V.push_back(0);
    for(int i = 0; i < n; i++){
      // cout << (fib(i)%MOD+MOD)%MOD << endl;
      V.push_back((fib(i)%MOD+MOD)%MOD);
    }
    if(n==1){cout << "O" << endl;return;}
    for(int i = 1; i <= n; i++){
      if(binary_search(all(V), i)){
        cout << "O";
      }
      else{
        cout << "o";
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

