**Problem:** Frog I
**Platform:** Atcoder  
**Topic:** Dynamic Programming

### Problem Statement:

There are N stones, numbered from `1` to `N`. The height of the `ith` stone is `hi`. The frog is initially on `Stone 1` and it wants to get to `Stone N`. It can only jump to either `i+1` or `i+2`, and the cost of the jump is `|hi - hj|`, where `j` is either `{i+1, i+2}`.

Find the minimum possible total cost incurred before the frog reaches `Stone N`.

### Dynamic Programming Steps:

- Initialize `dp[i]` as the minimum cost to get to `Stone i`.
- Update `dp[i+1]` as `min(dp[i+1], dp[i] + |Ai - Ai+1|)`.
- Update `dp[i+2]` as `min(dp[i+2], dp[i] + |Ai - Ai+2|)`.
- Base case: `dp[0] = 0`.

Make sure to initialize `dp` with a large value when it comes to minimizing!

```cpp
// Problem's code
void solve()
{
    int n;
    cin >> n;
    vector<ll> V(n);
    for (auto &i : V)
    {
        cin >> i;
    }
    vector<ll> dp(n + 1, 1e9 + 7);
    dp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        if (i + 1 < n)
        {
            dp[i + 1] = min(dp[i + 1], dp[i] + abs(V[i] - V[i + 1]));
        }
        if (i + 2 < n)
        {
            dp[i + 2] = min(dp[i + 2], dp[i] + abs(V[i] - V[i + 2]));
        }
    }
    cout << dp[n - 1] << endl;
}
```
