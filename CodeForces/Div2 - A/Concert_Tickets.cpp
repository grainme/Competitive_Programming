/**  /\_/\
*   (= ._.)
*   / > \>
* 
* Salam Marouane :)
**/

#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << (#x) << " = " << x << endl
typedef long long int ll;
typedef vector<int> vi;
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


void eraseElement(std::vector<int>& arr, int target) {
    auto it = std::remove(arr.begin(), arr.end(), target);
    if (it != arr.end()) {
        arr.erase(it);
    }
}

// Poblem's code
void solve()
{
  int t=1;
//   cin >> t;
  while (t--){
    int n,k;
    cin >> n >> k;
    multiset<int, greater<>> A;
    for(int i = 0; i < n; i++){
      int y;
      cin >> y;
      A.insert(y);
    }
    for(int i = 0; i < k; i++){
        int x;
        cin >> x;
        auto it = A.lower_bound(x);
        if(it == A.end()){
          cout << -1 << endl;
        }
        else{
          cout << *it << endl;
          A.erase(it);
        }
    }
  }
}

// Main function
int main()
{
  fast_io(); 
  solve();
}

