#include <iostream>
#include <math.h>

int main(void){
  int n, t;
  cin >> n >> t;
  int res = 6 - max(n, t) + 1;
  cout << res/gcd(res, 6) << "/" << 6/gcd(res, 6) << endl;
  
}
