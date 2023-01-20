#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int T;
  cin >> T;
  // To avoid scientific notation
  cout << std::setprecision(9) ;
  cout << (T%2==0?ceil(T/2.0):-ceil(T/2.0))<<endl;
}

int main() 
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    solve();
    return 0;
}
