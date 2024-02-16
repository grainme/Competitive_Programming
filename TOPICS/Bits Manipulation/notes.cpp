#include <bits/stdc++.h>

using namespace std;

int main(void){
  int x = 9;
  int a=3, b=4;
  cout << __builtin_popcount(x) << endl;
  cout << __builtin_ctz(x) << endl;
  cout << __builtin_clz(x) << endl;
  // 2 ways to calculate a+b using bitwise
  cout << (a ^ b) + 2*(a&b) << endl;
  cout << (a | b) + (a&b) << endl;
}
