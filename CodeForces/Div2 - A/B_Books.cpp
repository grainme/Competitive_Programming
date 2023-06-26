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
//cin >> t;
  while (t--){
    int n,b;
    cin >> n >> b;
    vi V(n);
    for(auto &i: V){
        cin >> i;
    }
    ll i = 0, j = 0, max_so_far = 0, sum_so_far = 0, ans=0;
    while(i < n){
        if(j>n-1)
        {
            i++;
            j=n-1;
            continue;
        }
        sum_so_far += V[j];
        if(sum_so_far > b){
            sum_so_far -= V[i++];
            sum_so_far -= V[j];
        }
        else{
            max_so_far = max(max_so_far, j-i+1);
            j++;
        }
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

