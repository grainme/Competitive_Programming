// https://codeforces.com/contest/266/problem/A

#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
void solve()
{
    int T;cin>>T;
  string s;
  cin>> s;
  int j,res=0;
  for(int i = 0; i < s[i]!='\0';i++)
  {
    if(s[i+1]==s[i])
    {
      res++;
    }
  }
  cout <<res<<endl;
}
 
int main() 
{
    solve();
    return 0;
}
