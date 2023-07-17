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

// Easy problem overall using LowerBound buil-in Algo in C++
// Poblem's code
void solve()
{
  int t = 1;
  // cin >> t;
  while(t--){
    int n,m;
    cin >> n >> m;
    // Multiset is cool, it sorts the elements SMHW lol, is it hashing fx ? anyways
    // Also it has lower_bound built in so why not ??
    multiset<int, greater<>> V;
    for(int i = 0; i < n; i++){
      int a;
      cin >> a;
      V.insert(a);
    }
    while(m--){
      int x;
      cin >> x;
      // We need to track the iterator, otherwise if we use *V.lower_bound() it not gonna track the specific element so when using erase it's gonna erase
      // all the elements equal to x!!
      auto check = V.lower_bound(x);
      if(V.count(*check)){
        cout << *check << endl;
        V.erase(check);
      }
      else{
        cout << -1 << endl;
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

