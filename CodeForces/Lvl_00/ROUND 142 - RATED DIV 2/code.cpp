#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
  int tests;
  long long T, x, res;
  cin >> tests;
  while(tests--)
  {
    res = 0;
    cin >> T;
    for(int i = 0 ; i < T; i++)
    {
      cin >> x;
      if(x==1){res++;}
    }
    res = (res/2 + res%2)+ (T-res);
    cout << res << endl;
  }
}
 
int main() 
{
    solve();
    return 0;
}
 
