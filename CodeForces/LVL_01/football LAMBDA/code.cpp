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
 
 
// CP template
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
 
 
 
const int N = 2e5 + 10 , INF = 0x3f3f3f3f;
// int A[N];
 
ll gcd(int a,int b){
  while(b^=a^=b^=a%=b);
  return a;
}
 
void strip(string &s)
{
  int write = 0;
  for (int read = 0; read < s.size(); read++) {
  if (s[read] != ' ' || (write > 0 && s[write - 1] != ' '))
    {s[write++] = s[read];}
  }
  s.resize(write);
}


// Problem's code
void solve()
{
  unordered_map<string, int> mpp;
  int t;
  cin>>t;
  string s;
  while(t--)
  {
    cin >> s;
    mpp[s]++;
  }
  auto mx = max_element(mpp.begin(), mpp.end(), [](auto &x,auto &y)
                    {return x.second < y.second;});
  cout << mx->first << endl;
}
 
 
// Main function
int main()
{
  fast_io();
  solve();
}
 
 


