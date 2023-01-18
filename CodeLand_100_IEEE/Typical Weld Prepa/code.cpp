#include <bits/stdc++.h>
 
using namespace std;
 
using ll = long long;
 
void solve()
{
  int T;
  cin >> T;
  int x,x_s=0,y,y_s=0,z,z_s=0;
  for(int i = 0; i < T; i++)
  {
    cin >> x>>y>>z;
    x_s += x;y_s+=y;z_s+=z;
  }
  if(x_s==0 && y_s==0 && z_s==0)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" <<endl;
  }
}
 
int main() 
{
  solve();
  return 0;
}
