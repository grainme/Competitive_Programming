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
    string s;
    cin >> s;
    int n = s.size();
    int pref[4] = {0,0,0,0};
    int i=0, j=0;
    int min_so_far = 1e9;
    while(j<n){
        pref[s[j]-'0']++;
        int pref_left_most = pref[s[i]-'0'];
        while(pref[s[i]-'0']>1){
            pref[s[i]-'0']--;
            i++;
        }
        if(pref[1]&&pref[2]&&pref[3]){
            min_so_far = min(min_so_far, j-i+1);
        }
        j++;
    }
    cout << (min_so_far==1e9?0:min_so_far) << endl; 
  }
}

// Main function
int main()
{
  fast_io(); 
  solve();
}

