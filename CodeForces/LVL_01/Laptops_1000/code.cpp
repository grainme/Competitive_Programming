/**  /\_/\
*   (= ._.)
*   / > \>
* 
* Salam Marouane :)
**/

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

__int128_t (data type for numeric values higher than 10^38 aka 2^127)
next_permutation to generate all the permutations

*/
 
// CP template
// substr(first_indice, last_indice) to get substring
using namespace std;
#define debug(x) cout << (#x) << " = " << x << endl
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

//----------CONSTANTS----------
const ll inf = INT_MAX;
const ll ep = 0.0000001;
const long long MOD = 1e9 + 7;
#define eps 1e-9
//----------GLOBALS----------

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
ll lcm(int a, int b){return (a / gcd(a, b)) * b;}
 
string bin(ll x)
{string s = bitset<64>(x).to_string();const auto loc1 = s.find('1');
  return s.substr(loc1) ;}

bool isPrime(int n)
{
  if (n <= 1){return false;}
  for (int i = 2; i * i <= n; i++)
  {if (n % i == 0){return false;}}return true;
}

bool isPowerOfTwo(ll n) {
   if(n==0) return false;
   return (ceil(log2(n)) == floor(log2(n)));
}

ll fact(int n)
{
  if(n==0)return 1;return fact(n-1)*n;
}

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

// Fibonacci using Binet's Formila (not precise dw)
int fib(int N) 
{
  return round(pow((1 + sqrt(5)) / 2, N) / sqrt(5));
}

int logb(int a, int b){return log2(a) / log2(b);}

int gcdArray(vector<int>& arr, int st, int ed)
{
    int gcd_ = 0;
    for (int i = st; i < ed; i++) {
        gcd_ = gcd(gcd_, arr[i]);
    }
    return gcd_;
}

bool comp(vector<pair<int,int>> V, int i, int j)
{
  return V[i].second>V[j].second;
}

// Problem's Code 
void solve()
{
  int n;
  cin >> n;
  vector<pair<int,int>>V;
  bool res=false;
  vi A, B;
  unordered_map<int, int> mpp;
  for(int i = 0; i < n; i++)
  {
    int a,b;
    cin >> a>>b;
    mpp[a] = b;
    A.push_back(a);
    B.push_back(b);
  }
  sort(all(A));sort(all(B));
  for(int k = 0; k < n; k++)
  {
    if(mpp[A[k]]>B[k]){res=true;break;}
  }
  cout << (res==true?"Happy Alex":"Poor Alex");
}

// Main function
int main()
{
  // freopen("speeding.in", "r", stdin);
  // freopen("speeding.out", "w", stdout); 
  fast_io("tests");
  solve();
}
