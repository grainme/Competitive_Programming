#include <bits/stdc++.h>

using namespace std;



void solve(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> V, temp;;
        for(int i = 0; i < n; ++i){
            int chiHaja;
            cin >> chiHaja;
            V.push_back(chiHaja);
        }
        temp = V;
        sort(V.begin(), V.end());
        int mx1 = V[n-1], mx2 = V[n-2];
        for(int ele: temp){
            if(ele == mx1){
                cout << ele - mx2 << " ";
            }
            else{
                cout << ele - mx1 << " ";
            }
        }
        cout << endl;
    }
}




int main()
{  
    solve();
    return 0;
}