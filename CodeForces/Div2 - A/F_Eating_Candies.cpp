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
// 
}
 

// Poblem's code
void solve()
{
  int t=1;
  cin >> t;
  while (t--){
    int n;
    cin >> n;
    vi V(n);
    for(auto &i: V){
        cin >> i;
    }
    vector<pair<int, int>> Alice, Bob;
    int i = 0, j = n-1, sA=0, sB=0,A=0, B=0;
    while (i < n && j>0)
    {
        sA+= V[i];
        Alice.push_back({sA,i});
        i++;
        sB+= V[j];
        Bob.push_back({sB,j});
        j--;
    }
    i = 0, j = 0;
    vector<pair<int, int>> res;
    bool check = false;
    while (i < Alice.size() && j < Bob.size())
    {
        if(Alice[i].first == Bob[j].first && Alice[i].second < Bob[j].second){
            check = true;
            res.push_back({i+1,j+1});
            i++;j++;
        }
        else if(Alice[i].first>Bob[j].first){
            j++;
        }
        else{
            i++;
        }
    }
    if(check){
        cout << res[res.size()-1].first +  res[res.size()-1].second << endl;
    }
    else{
        cout << 0 << endl;
    }

  }
}

// Main function
int main()
{
  fast_io("tests"); 
  solve();
}

