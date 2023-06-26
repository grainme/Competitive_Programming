/**  /\_/\
*   (= ._.)
*   / > \>
* 
* Salam Marouane :)
**/

#include <bits/stdc++.h>
using namespace std;

#define size(x) (int)x.size()
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
//   #ifndef ONLINE_JUDGE
//     freopen("in.txt", "r", stdin);
//     freopen("out.txt", "w", stdout); 
//   #endif 
}
 

// Poblem's code
void solve()
{
  int t=1;
  cin >> t;
  while (t--){
    int n,k;
    cin >> n >> k;
    string s1, s2;
    cin >> s1 >> s2;
    // int j = 0;
    for(int i = 0; i < n; i++){
        if(s1[i]==s2[i]){
            for(int j = i+1; j < n ; j++){
                if(s1[j]!=s2[j] && s1[j]!=0){
                    
                }
            }
        }
    }
  }
}

// Main function
int main()
{
  fast_io("tests"); 
  solve();
}

