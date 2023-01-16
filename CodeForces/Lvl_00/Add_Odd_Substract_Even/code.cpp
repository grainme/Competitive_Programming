#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve()
{
  int a,b;
  cin >> a>>b;
  if(a==b){cout << "0"<<endl;}
  else if(a<b)
  {
    if(b%2==0 && a%2==0 || b%2!=0 && a%2!=0)
      {cout << "2" << endl;}
    else if(b%2==0 && a%2!=0 || b%2!=0 && a%2==0)
    {
      cout << "1" << endl;
    }
  }
  else
  {
    if(b%2==0 && a%2==0 || b%2!=0 && a%2!=0)
      {cout << "1" << endl;}
    else if(b%2==0 && a%2!=0 || b%2!=0 && a%2==0)
    {
      cout << "2" << endl;
    }

  }

}

int main() 
{
  freopen("in.txt","r", stdin);

  int tests;
  cin >> tests;
  while (tests--) 
  {
    solve();
  }
  return 0;
}
