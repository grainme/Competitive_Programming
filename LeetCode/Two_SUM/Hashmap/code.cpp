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
  long long v,target;
  cin >> v >> target;
  std::vector<int> V;
  long long numb;
  int res =0;
  for(int i = 0; i < v; i++)
  {
    cin >> numb;
    V.push_back(numb);
  }
  // We can also use unordered_set but with we would return only "YES" or "NO" not the indexes!
  unordered_map<int, int> stt;
  for(int i = 0; i < v ; i++)
  {
    if(stt.find(V[i]) != stt.end())
    {
      res++;
      cout << i+1 << " " << stt[V[i]] << endl;
      break;
    }
    else
    {
      stt[target - V[i]] = i+1;
    }
  }
  if(res==0){cout << "-1"<<endl;}

}

// Main function
int main()
{
  fast_io();
  solve();
}


