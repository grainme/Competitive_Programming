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
//   cin >> t;
  while (t--){
    vector<pair<int, int>> V;
    int n;
    cin >> n;
    while (n--)
    {
        int a,b;
        cin >> a >> b;
        V.push_back(make_pair(a,1));
        V.push_back(make_pair(b,-1));
    }
    sort(all(V));
    int sum_so_far = 0, max_ever = -1;
    for(auto &i: V){
        sum_so_far += i.second;
        max_ever = max(max_ever, sum_so_far);
    }
    cout << max_ever << endl;
  }
}

// Main function
int main()
{
  fast_io(); 
  solve();
}
