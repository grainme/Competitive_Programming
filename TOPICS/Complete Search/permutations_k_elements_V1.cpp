#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL), cout.tie(NULL);

    // code
    const int n = 3, k = 3;
    
    vector<int> V(n);
    iota(V.begin(), V.end(), 1);

    vector<int> A(k, 1);
    A.resize(n, 0);
    do
    {
        for(int i = 0; i < n; i++){
            if(A[i]){
                cout << V[i] << " ";
            }
        }
        cout << endl;
    } while (next_permutation(A.begin(), A.end()));
    
}