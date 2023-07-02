/**  /\_/\
*   (= ._.)
*   / > \>
*
* Salam Marouane :)
*/

#include <bits/stdc++.h>
using namespace std;

#define _USE_MATH_DEFINES
typedef long long int ll;
typedef vector<int> vi;
#define debug(x) cout << (#x) << " = " << x << endl
#define all(v) ((v).begin()), ((v).end())
#define rall(v) ((v).rbegin()), ((v).rend())
#define endl "\n"
#define pi M_PI
#define cin_str(s) (getline(cin, s))

//----------CONSTANTS----------
const ll inf = INT_MAX;
const long long MOD = 1e9 + 7;
#define eps 1e-9
//----------GLOBALS----------

void fast_io(bool ans, string s) {
  ios::sync_with_stdio(NULL);
  cin.tie(NULL), cout.tie(NULL);
  if(ans){
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
  }
}

// Problem's code
void solve() {
  int t = 1;
  // cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k = 1;
    while(k < 100){
        map<string,int> mpp;
        for(int i = 0; i < n-k+1; i++){
            string res = "";
            for(int j = i; j < i+k; j++){
                res += s[j];
            }
            mpp[res]++;
        }
        bool cool = true;
        for(auto &i: mpp){
            if(i.second > 1){
                cool = false;
            }
        }
        if(cool){
            cout << k << endl;
            break;
        }
        k++;
    }
  }
}

// Main function
int main() {
  fast_io(true, "whereami");
  solve();
}
