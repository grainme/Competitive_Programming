// https://codeforces.com/problemset/problem/158/A

#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
using ll = long long;
 
void solve()
{
  int n,k, res=0,x;
  cin >> n >>k;
  vector<int> V;
  for(int i = 0; i < n ;i++){cin >> x;V.push_back(x);}
  for(int i = 0 ; i < n ; i++)
  {
    if(V[i]>0 && V[i]>= V[k-1])
    {
      res++;
    }
  }
  cout << res << endl;
}
 
int main() 
{
  solve();
  return 0;
}
