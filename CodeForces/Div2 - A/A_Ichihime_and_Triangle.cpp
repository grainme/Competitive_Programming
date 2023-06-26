/**  /\_/\
*   (= ._.)
*   / > \>
* 
* Salam Marouane :)
**/

#include <bits/stdc++.h>
using namespace std;

#define size(x) (int)x.size()
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
//   #ifndef ONLINE_JUDGE
//     freopen("in.txt", "r", stdin);
//     freopen("out.txt", "w", stdout); 
//   #endif 
}
 
 
ll gcd(int a,int b){while(b^=a^=b^=a%=b);return a;}
ll lcm(int a, int b){return (a / gcd(a, b)) * b;}


bool isPowerOfTwo(int x){return (x && !(x & (x - 1)));}

ll fact(int n){if(n==0)return 1;return fact(n-1)*n;}

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

int fib(int N){return round(pow((1 + sqrt(5)) / 2, N) / sqrt(5));}

int logb(int a, int b){return log2(a) / log2(b);}

// Poblem's code
void solve()
{
  int t=1;
  cin >> t;
  while (t--){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << a  << " " << c << " " << c << endl; 
  }
}

// Main function
int main()
{
  fast_io(); 
  solve();
}

