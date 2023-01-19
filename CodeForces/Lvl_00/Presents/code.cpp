include <bits/stdc++.h>
 
using namespace std;
 
void solve()
{
  int T,x;
  cin >> T;
  int V[T];
  for(int i = 0;i<T;i++)
  {
    cin >> x;
    V[x-1] = i+1;
  }
  for(auto i: V){cout << i << " ";}
  cout << endl;
}
 
int main() 
{
    solve();
    return 0;
}
