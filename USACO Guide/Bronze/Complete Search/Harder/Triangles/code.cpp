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


struct vertex
{
    int x;
    int y;
};

// Problem's code
void solve() {
  int t = 1;
  // cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<vertex> V;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        vertex new_vertex = {x,y};
        V.push_back(new_vertex);
    }

    ll ans = 0, max_so_far = -1e9;
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        for(int k = 0; k < n; k++){
          if(V[i].y == V[j].y && V[k].x == V[i].x ){
            ans = abs(V[j].x - V[i].x) * abs(V[k].y - V[i].y);
            max_so_far = max(max_so_far, ans);
          }
        }
      }
    }
    cout << max_so_far << endl;
  }
}


// Main function
int main() {
  fast_io(true, "triangles");
  solve();
}
