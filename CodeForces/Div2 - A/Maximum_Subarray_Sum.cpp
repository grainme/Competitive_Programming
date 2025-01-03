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
    int n;
    cin >> n;
    vi V(n);
    for(auto &i: V){
        cin >> i;
    }
    ll sum_so_far = V[0], i = 1, max_so_far = V[0];
    while(i < n){
        if(sum_so_far + V[i] < V[i]){
            sum_so_far = V[i];
        }
        else{
            sum_so_far += V[i];
        }
        max_so_far = max(max_so_far, sum_so_far);
        i++;
    }
    cout << max_so_far << endl;
  }
}

// Main function
int main()
{
  fast_io(); 
  solve();
}

