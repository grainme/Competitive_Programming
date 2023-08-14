#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> V(n);
    for (auto &i : V)
    {
        cin >> i;
    }
    cout << *upper_bound(V.begin(), V.end(), 4) << endl;
}