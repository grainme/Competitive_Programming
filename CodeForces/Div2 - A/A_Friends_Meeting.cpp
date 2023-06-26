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
//   cin >> t;
  while (t--){
    int a,b;
    cin >> a >> b;
    int c = max(a,b);a = min(a,b); b = c;
    ll i = 0, j = 0, s = 0, check=false;
    while(true){
        if(!check){
            a += 1;
            s += ++i;
            check = true;
        }
        else{
            b -= 1;
            s += ++j;
            check = false;
        }
        if(a==b){
            break;
        }
    }
    cout << s << endl;
  }
}

// Main function
int main()
{
  fast_io(); 
  solve();
}

