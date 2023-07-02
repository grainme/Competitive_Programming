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
    int time[1000];
    int start[n], end[n];
    for(int i = 0; i < 1000; i++){
        time[i] = 0;
    }
    for(int i = 0; i < n; i++){
        cin >> start[i] >> end[i];
        for(int k = start[i]; k < end[i]; k++){
            time[k]++;
        }
    }
    int max_frame_lifeguard = -1e9;
    for(int i = 0; i < n; i++){
        int lifeguard_exists = 0;
        for(int k = start[i]; k < end[i]; k++){
            time[k]--;
        }
        for(int k = 0; k < 1000; k++){
            if(time[k]!=0){
                lifeguard_exists++;
            }
        }
        max_frame_lifeguard = max(max_frame_lifeguard, lifeguard_exists);
        for(int k = start[i]; k < end[i]; k++){
            time[k]++;
        }
    }
    cout << max_frame_lifeguard << endl;
  }
}

// Main function
int main() {
  fast_io(true, "lifeguards");
  solve();
}
