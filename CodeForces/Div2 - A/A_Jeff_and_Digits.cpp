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
    int n, cnt=0; 
    cin >> n;
    vi V;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a!=0){V.push_back(a);}
        else{cnt++;}
    }
    string res=string(cnt, '0');
    if(res.size()==0){cout<<"-1"<< endl;return;}
    sort(rall(V));
    string mx = "";
    for(int i = 0; i < V.size(); i++){
        res = '5'+ res;
        
        ll ans =0;
        for(auto &i: res){
            ans += i - '0';
        }
        // cout << ans << endl;
        if(ans%9==0 && mx.size() <= res.size()){
            //cout << res << endl;
            mx = res;
        }
    }
    
    cout << (mx.size()==0?"0":mx) << endl;

    // cout << "-----------\n";
  }
}

// Main function
int main()
{
  fast_io("tests"); 
  solve();
}

