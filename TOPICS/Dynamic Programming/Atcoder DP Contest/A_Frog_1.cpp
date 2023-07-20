#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

const int MAXN = 1e6 + 7;
const int INF = 1e9 + 5;
vector<int> dp(MAXN, INF);
vector<int> V;

int lookup(int n, vector<int> &V, vector<int> &dp)
{

    if (n == 0)
    {
        return dp[0] = 0;
    }
    if (dp[n] != INF)
    {
        return dp[n];
    }
    else if (n == 1)
    {
        return dp[1] = lookup(0, V, dp) + abs(V[1] - V[0]);
    }
    return dp[n] = min(lookup(n - 1, V, dp) + abs(V[n] - V[n - 1]), lookup(n - 2, V, dp) + abs(V[n] - V[n - 2]));
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        V.push_back(a);
    }
    cout << lookup(n - 1, V, dp) << endl;

    return 0;
}