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
const int MAX = INT_MAX;
const long long MOD = 1e9 + 7;
#define eps 1e-9
//----------GLOBALS----------

void fast_io()
{
  ios::sync_with_stdio(NULL);
}


// Poblem's code
void solve()
{
  int t=1;
//   cin >> t;
  while (t--){
    int n;
    cin >> n;
    vi V(n);
    for(auto &i: V){
        cin >> i;
    }
    ll i = 1, j = n-2, sum1 = V[0], sum2 = V[n-1], max_so_far = 0;
    while(i<=j+1){
        if(sum1 > sum2){
            sum2 += V[j--];
        }
        else if(sum1 < sum2){
            sum1 += V[i++];
        }
        else{
            max_so_far = max(max_so_far, sum2);
            sum1 += V[i++];
            sum2 += V[j--];
            
        }
    }
    // if(sum1==sum2){max_so_far = max(max_so_far , sum1);}

    cout << max_so_far << endl;
  }
}

// Main function
int main()
{
  fast_io(); 
  solve();
}

