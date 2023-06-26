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
  cin >> t;
  while (t--){
    string s;
    cin >> s;
    int i = 0;  
    bool res = false;
    string first_check = s;
    sort(all(first_check));
    if(first_check == s){
        cout << "YES" << endl;
        continue;
    }
    while (i < s.size())
    {
        if(s[i]!=s[i+1] && s[i]!=s[i-1]){
            s.erase(s.begin()+i);
            i--;
            // cout << s << endl;
            string temp = s;
            sort(all(temp));
            if(temp == s){
                res = true;
            }
        }
        i++;
    }
    cout << (res?"YES":"NO") << endl;
    // cout << "----------\n";
    // break;
  }
}

// Main function
int main()
{
  fast_io("tests"); 
  solve();
}

