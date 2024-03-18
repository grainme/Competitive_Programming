#include <bits/stdc++.h>

using namespace std;

int main(void){
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    vector<pair<char, int>> V, up, dw;
    for(int i = 0; i < (int)s.size(); i++){
      if(s[i]=='B'){
        if(up.size()>0){
          up.pop_back();
        }
      }
      else if(s[i]=='b'){
        if(dw.size()){
          dw.pop_back();
        }
      }
      else{
        if(isupper(s[i])){
          up.push_back({s[i], i});
        }
        else{
          dw.push_back({s[i], i});
        }
      }
    }
    for(auto &i: up){V.push_back(i);}
    for(auto &k: dw){V.push_back(k);}
    sort(V.begin(), V.end(), [&](pair<char, int> A, pair<char, int> B){
      return A.second < B.second;
    });
    for(auto &i: V){
      cout << i.first;
    }
    cout << endl;
  }
}
