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
 
/* LAMBDA Example
  auto mx = max_element(mpp.begin(), mpp.end(),
              [](auto &x,auto &y){return x.second < y.second;});

  cout << mx->first << endl;
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
#define slice(s,a,b) (s.substr(a, b))
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

// if(len(set(x))>2 or x.count(arr[0][0])>1 or x[len(x)//2]!=arr[0][0])

  
void solve()
{
  int n;
  string s, res="YES";
  vector<string> V;
  cin >> n;
  int mid = ceil(n/2.0);
  for(int i = 0; i < n; i++)
  {
    cin >> s;
    V.push_back(s);
  }
  string middle = V[mid-1];
  set<char> st(middle.begin(), middle.end());
  int c = count(all(middle),V[0][0]);
  if(st.size()>2 || c>1 || middle[mid-1]!=V[0][0]){res="NO";}
  else
  {
    for(int i = 0; i < mid; i++)
    {
      if(V[i] != V[n-i-1])
      {
        res="NO";
        break;
      }
    }
  }
  cout << res << endl;
}
 
 
// Main function
int main()
{
  fast_io();
  solve();
}
 
