#include <bits/stdc++.h>

using namespace std;

int main (int argc, char *argv[]) {
  
  // in Binary 0001
  int n = 1;
  auto bin = bitset<8>(n);
  // left shifting by k means 1 << k --> 000100 -- > 1 * 2^k 
  cout << (n << 2) << endl;
  
  return 0;
}
