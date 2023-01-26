#include <iostream>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <cstring>
#include <stack>
#include <numeric> 

using namespace std;

// CP template
typedef pair<int,int> pii;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<char> vc;
#define all(v)       ((v).begin()), ((v).end())
#define rall(v)      ((v).rbegin()), ((v).rend())
#define endl "\n"

void fast_io()
{
  ios::sync_with_stdio(NULL);
  cin.tie(NULL), cout.tie(NULL);
  freopen("in.txt", "r", stdin);
  freopen("out.txt", "w", stdout);    
}

const int N = 2e5 + 10 , INF = 0x3f3f3f3f;
// int a[N];
 
bool cmp(int a,int b){
  return a>b;
}
 
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
  int n,t,x, res = INF;
  cin >> n >> t;
  vi V;
  for(int i = 0; i < t; i++)
  {
    cin >> x;
    V.push_back(x);
  }
  sort(all(V));
  for(int i = 0; i < t-n+1; i++)
  {
    res = min(res,V[i+n-1] - V[i]);
  }
  cout << res << endl;
}

// Main function
int main()
{
  fast_io();
  solve();
}
