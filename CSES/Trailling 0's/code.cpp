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

 
// CP template
// substr(first_indice, last_indice) to get substring
using namespace std;
const long long MOD = 1e9 + 7;
#define eps 1e-9
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


ll fact(int n)
{
  if(n==0)return 1;
  return fact(n-1)*n;
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

int logb(int a, int b)
{
    return log2(a) / log2(b);
}
 

// Problem's Code 
void solve()
{
  int n;
  cin>>n;
  int k = floor(logb(n, 5)), res=0;
  for(int i = 1; i <= k; i++)
  {
    res += (n/pow(5,i));
  }
  cout << res << endl;
}


// Main function
int main()
{
  // freopen("speeding.in", "r", stdin);
  // freopen("speeding.out", "w", stdout); 
  fast_io("tests");
  solve();
}
