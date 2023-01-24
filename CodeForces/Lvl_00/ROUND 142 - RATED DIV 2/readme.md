## Problem:
GamingForces has a problem with a time limit per test of 2 seconds and a memory limit per test of 256 megabytes.
The input is in standard input and the output is in standard output.

## Time Complexity:
The time complexity of this solution is O(T) as the program loops through T number of inputs.

## Space Complexity:
The space complexity of this solution is O(1) as the program only uses a few variables of constant size.

# Code
```
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
 
```
