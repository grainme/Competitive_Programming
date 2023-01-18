#include <bits/stdc++.h>
 
using namespace std;
 
using ll = long long;
 
void solve()
{
  int T;
  cin >> T;
  vector<int> arr = {2,4,5,7,9};
  if (find(arr.begin(), arr.end(), T%10) != arr.end())
  {
    cout << "hon" << "\n";
  }
  else if(T%10 == 3)
  {
    cout << "bon" << "\n";
  }
  else
  {
    cout << "pon" << "\n";
  }
}
 
int main() 
{
  solve();
  return 0;
}
