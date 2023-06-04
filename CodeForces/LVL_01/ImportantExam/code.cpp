/**  /\_/\
*   (= ._.)
*   / > \>
* 
* Salam Marouane :)
**/

#include <bits/stdc++.h>


// s.substr(first_indice, last_indice) to get substring
using namespace std;

#define sz(x) (int)x.size()
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
const long long MOD = 1e9 + 7;
#define eps 1e-9
//----------GLOBALS----------

void fast_io(string name="tests")
{
  ios::sync_with_stdio(NULL);
  cin.tie(NULL), cout.tie(NULL); 
  #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout); 
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
  return round(pow((1 + sqrt(5)) / 2, N) / sqrt(5)); // O(1)
}

int logb(int a, int b){return log2(a) / log2(b);}

bool comp(const pair<int,int>& p1, const pair<int,int>& p2)
{
    return p1.second > p2.second;
}


bool is_alpha(char x, char y){
    return x>='A' && x<='Z' && x != y;
}

bool isPalindrome(string s) {
    string res="";
    for(auto &i: s){
        if(iswalnum(i)){
            res += tolower(i);
        }
    }
    int i=0, j=res.size()-1;
    while(i<=j){
        if(res[i]!=res[j]){
            return false;
        }
        i++;j--;
    }
    return true;
}

// Problem's Code
void solve()
{
	int n, m;
	cin >> n >> m;

	vector<string> V;
	for(int i = 0; i < n; i++){
		string x;
		cin >> x;
		V.push_back(x);
	}
	int k = 0;
	vector<int> scores;
	while(k<m){
		map<char, int> mp;
		int res = 0;
		for(int i = 0; i < n; i++){
			mp[V[i][k]]++;
		}
		for(auto &i: mp){
			res = max(res, i.second);
		}
		scores.push_back(res);
		k++;
	}
	ll ans = 0;
	for(int i = 0; i < m; i++){
		int t;
		cin >> t;
		ans += t * scores[i];
	}
	cout << ans << endl;
}   


// Main function
int main()
{
  //fast_io("tests"); 
  solve();
}
