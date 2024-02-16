**Problem:** Frog II
**Platform:** Atcoder  
**Topic:** Dynamic Programming

### Problem Statement:

same problem as Frog I but now you can jump at to i+k!

Find the minimum possible total cost incurred before the frog reaches `Stone N`.

### Dynamic Programming Steps:

- Initialize `dp[i]` as the minimum cost to get to `Stone i`.
- Update `dp[i+j]` as `min(dp[i+j], dp[i] + |Ai - Ai+j|)`. such that 1 <= j <=k

- Base case: `dp[0] = 0`.

Make sure to initialize `dp` with a large value when it comes to minimizing!

```cpp
// Problem's code
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<ll> V(n);
    for (auto &i : V)
    {
        cin >> i;
    }
    vector<ll> dp(n + 1, 1e9 + 7);
    dp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (i + j < n)
            {
                dp[i + j] = min(dp[i + j], dp[i] + abs(V[i] - V[i + j]));
            }
        }
    }
    cout << dp[n - 1] << endl;
}
```
