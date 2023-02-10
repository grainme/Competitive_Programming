#include <iostream>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <cstring>
#include <stack>
#include <numeric> 
#include <bitset>

/* LAMBDA Example
  auto mx = max_element(mpp.begin(), mpp.end(),
              [](auto &x,auto &y){return x.second < y.second;});

  cout << mx->first << endl;
  
  bool cmp(string a, string b) {
    if (d[a][0] != d[b][0]) return d[a][0] > d[b][0];
    if (d[a][1] != d[b][1]) return d[a][1] < d[b][1];
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return a[i] > b[i];
    }
    return false;
    }

*/
 
// CP template
// substr(first_indice, last_indice) to get substring
using namespace std;
#define _USE_MATH_DEFINES
typedef pair<int,int> pii;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<char> vc;
#define all(v)       ((v).begin()), ((v).end())
#define rall(v)      ((v).rbegin()), ((v).rend())
#define endl "\n"
#define pi M_PI
#define cin_str(s)   (getline(cin, s))
/* To avoid problems with negative numbers in cpp ! */
#define modulo_neg(a,b) ((a%b + b)%b) 
 
void fast_io()
{
  ios::sync_with_stdio(NULL);
  cin.tie(NULL), cout.tie(NULL); 
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);  
  #endif 
}
 
 
ll gcd(int a,int b){while(b^=a^=b^=a%=b);return a;}
 
string strip(string res)
{
  for(int i = res.size()-1; i > 0; --i)
  {
    if(res[i] != ' ')
    {
      res.erase(res.begin()+i+1, res.end());
      break;
    }
  }
  return res;
}

string bin(ll x)
{
  string s = bitset<64>(x).to_string();
  const auto loc1 = s.find('1');
  return s.substr(loc1) ;
}

template <typename A, typename B>
multimap<B, A> flip_map(map<A,B> & src) {
    multimap<B,A> dst;
    for (typename map<A, B>::const_iterator it = src.begin(); it != src.end(); ++it)
        dst.insert(pair<B, A>(it -> second, it -> first));
    return dst;
}


// Order of args references order in the Container.
bool comp(string a, string b)
{
  return a.size()>=b.size();
}


// Problem's Code 
void solve()
{
  int n,m;
  cin >> n >>m;
  int res=0;
  vector<string> V(n);
  for(int i = 0; i < n; ++i)
  {
    cin >> V[i];
    res += V[i].size();
    if(res>m)
    {
      cout << endl << V[i] ;
      res=V[i].size();
    }
    else
    {
      if(i!=0)
      {
        cout << " ";
      }
      cout << V[i];
    }
  }
} 

// Main function
int main()
{
  // freopen("word.in", "r", stdin);
  // freopen("word.out", "w", stdout);
  fast_io();
  solve();
}
 
