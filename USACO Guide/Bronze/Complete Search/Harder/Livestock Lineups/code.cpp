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
    vector<string> cows{"Beatrice", "Belinda", "Bella", "Bessie", "Betsy", "Blue", "Buttercup", "Sue"};
    sort(all(cows));
    vector<pair<string, string>> pairs_besides;
    for(int k = 0; k < n; k++){
        string lewel, lakher;
        for(int i = 0; i < 6; i++){
            string s;
            cin >> s;
            if(i==0){
                lewel = s; 
            }
            else if(i==5){
                lakher = s;
            }
        }
        pairs_besides.push_back(make_pair(lewel, lakher));
    }
    do
    {
        bool check = true;
        for(int i = 0; i < pairs_besides.size(); i++){
            auto it1 = find(all(cows), pairs_besides[i].first);
            auto it2 = find(all(cows), pairs_besides[i].second);
            if(abs(it1 - it2) != 1){
                check = false;
                break;
            }
        }
        if(check == true){
            break;
        }
    } while (next_permutation(all(cows)));

    for(auto &i: cows){
       cout << i << endl; 
    }
  }
}

// Main function
int main() {
  fast_io(true, "lineup");
  solve();
}
