#include <bits/stdc++.h>
 
using namespace std;
 
using ll = long long;
 
void solve()
{
  int T;
  cin >> T;
  int res = T/100;
  int mod = T%100;
  if (mod!=0)
  {
    cout << res +1 << endl;
  }
  else
  {
    cout << res << endl;
  }
}
 
int main() 
{
  solve();
  return 0;
}
