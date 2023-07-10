#include <bits/stdc++.h>

using namespace std;


void solve(){
  int t;
  cin >> t;
  while (t--)
  {
    long long n, k, ans=0, temp;
    cin >> n >> k;
    temp = n;
    while(n>0){
      ans += n%3;
      n/=3;
    }
    if(k>=ans && k<=temp && ans%2==k%2){
      cout << "Yes" << endl;
    }
    else{
      cout << "No" << endl;
    }
  }
}
// 102 ---> 1*3^2 + 2*3^0
int main(){
  solve();
}
