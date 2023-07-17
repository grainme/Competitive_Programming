#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL), cout.tie(NULL);

    // code
    int n, k;
    cin >> n >> k;
    vector<int> V(n);
    for (auto &i : V)
    {
        cin >> i;
    }
    int ans = 0;

    for (int mask = 0; mask < (1 << n); mask++)
    {
        if(__builtin_popcount(mask) == k){
            ans++;
            for(int i = 0; i < n; i++){
                if(mask & (1<<i)){
                    cout << V[i] << " ";
                }
            }
            cout << endl;
        }
    }
    cout << "Ans : " << ans << endl;
} 

/*
3 2
1 2 5 
*/