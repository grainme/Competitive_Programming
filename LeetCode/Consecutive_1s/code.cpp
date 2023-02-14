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
#define debug(a) cout << #a << " " << a << "\n";
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
 
void fast_io(string name="tests")
{
  ios::sync_with_stdio(NULL);
  cin.tie(NULL), cout.tie(NULL); 
  #ifndef ONLINE_JUDGE
    freopen((name+".in").c_str(), "r", stdin);
    freopen((name+".out").c_str(), "w", stdout);  
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

bool isPrime(int n)
{
  // NOTE THAT HERE I CONSIDERED '1' AS PRIME NUMBER !!!
  if (n < 1){return false;}
  for (int i = 2; i * i <= n; i++)
  {if (n % i == 0){return false;}}return true;
}

void primeFactors(int n)
{
    int c=2;
    while(n>1)
    {
        if(n%c==0){
        cout<<c<<" ";
        n/=c;
        }
        else c++;
    }
}

// Order of args references order in the Container.
bool comp(string a, string b)
{
  return a.size()>=b.size();
}


// Problem's Code 
void solve()
{
  vi V;
  int n;
  cin >> n;
  for(int i = 0; i < n; i++)
  {
    int x;
    cin >>x;
    V.push_back(x);
  }
  int f=0, l=0, mx=0;
  while(l<n)
  {
    if(V[l]==1)
    {
      l++;
    }
    else
    {
      mx = max(mx, l-f);
      l++;
      f=l;
    }
  }
  mx = max(mx, l-f);
  cout << mx;
} 

// Main function
int main()
{
  fast_io("tests");
  solve();
}
