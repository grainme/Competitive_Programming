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
 


// Poblem's code
void solve()
{
  int t=1;
//   cin >> t;
  while (t--){
    string s;
    cin >> s;
    map<char, int> mpp;
    for(auto &i: s){
        if(i=='7'){
            mpp[i]++;
        }
        else if(i=='4'){
            mpp[i]++;
        }
    }
    if(mpp['4']==0 && mpp['7']==0){cout << -1<<endl;}
    else if(mpp['4']==mpp['7']){
        cout << '4' << endl;
    }
    else{
        if(mpp['4']>mpp['7']){
            cout << '4' << endl;
        }
        else{
            cout << '7' << endl;
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

