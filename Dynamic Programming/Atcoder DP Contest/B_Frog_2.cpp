#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

const int MAXN = 1e6 + 7;
int dp[MAXN];
vector<int> V;

// dp[i] represents the min cost to get to stone i

// This is memoisation type of style :)
int jump(int n, int x)
{
    if (dp[n] != -1)
    {
        return dp[n];
    }
    if (n == 0)
    {
        return dp[0] = 0;
    }
    int min_dp = INT32_MAX;
    for (int i = 1; i <= x; i++)
    {
        // cout << n << endl;
        if (n - i >= 0)
        {
            min_dp = min(min_dp, jump(n - i, x) + abs(V[n] - V[n - i]));
        }
    }
    return dp[n] = min_dp;
}

// Let's do tabulation instead

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        V.push_back(a);
    }

    dp[0] = 0;
    for (int k = 1; k < n; k++)
    {
        int min_dp = INT32_MAX;

        for (int i = 1; i <= x; i++)
        {
            if (k - i >= 0)
            {
                min_dp = min(min_dp, dp[k - i] + abs(V[k] - V[k - i]));
            }
            else{
                break;
            }
        }
        dp[k] = min_dp;
    }

    cout << dp[n-1] << endl;
    return 0;
}