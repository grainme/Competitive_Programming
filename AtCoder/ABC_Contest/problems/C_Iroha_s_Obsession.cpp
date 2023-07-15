#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> V(k);
    for(int i = 0; i < k; i++){
        cin >> V[i];
    }
    sort(V.begin(), V.end());
    for(int i = n; i < 1e9+10; i++){
        string res = to_string(i);
        bool check = true;
        for(auto &i: res){
            if(binary_search(V.begin(), V.end(), i-'0')){
                check = false;
            }
        }
        if(check){
            cout << res << endl;
            return 0;
        }
    }   
    cout << flush;
    return 0;
}