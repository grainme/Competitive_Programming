#include <bits/stdc++.h>

using namespace std;


int main(void){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    map<int, vector<int>> mpp1;
    map<int , int> mpp;
    for(int i = 0; i < n; i++){
      int x;
      cin >> x;
      mpp[x]++;
      mpp1[x].push_back(i);
    }
    int mx = 0;
    for(auto &i: mpp){
      if(i.second > 0){
        mx = max(mx, mpp1[i.first][mpp1[i.first].size()-2]);
      }
    }
    cout << mx + 1 << endl;
  }
  return 0;
}
