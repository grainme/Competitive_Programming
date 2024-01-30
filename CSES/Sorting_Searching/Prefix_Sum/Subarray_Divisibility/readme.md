# Subarray Divisibility

## Problem Statement

Given an array of n integers, your task is to count the number of subarrays where the sum of values is divisible by n.

### Input

- The first input line has an integer `n`: the size of the array.
- The next line has `n` integers `a_1, a_2, ..., a_n`: the contents of the array.

### Output

Print one integer: the required number of subarrays.

### Constraints

- 1 ≤ n ≤ 2 × 10^5
- -10^9 ≤ a_i ≤ 10^9

## Solution

```cpp
void solve()
{
    ll n;
    cin >> n;
    vector<ll> pref(n + 1, 0);
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        pref[i] = pref[i - 1] + x;
    }
    map<ll, ll> mpp;
    ll ans = 0;
    mpp[0]++;
    for (ll i = 1; i <= n; i++)
    {
        if (mpp[(n + (pref[i] % n)) % n] > 0)
        {
            ans += mpp[(n + (pref[i] % n)) % n];
        }
        mpp[(n + (pref[i] % n)) % n]++;
    }
    cout << ans << endl;
}
```

## Time Complexity

The time complexity of the solution is O(n) as it iterates through the array once.

## Space Complexity

The space complexity is O(n) due to the vector `pref` and the map `mpp`, both of which have a size proportional to the input size `n`.

## Negative Modulo Problem

The solution handles the negative modulo problem by using the expression `(n + (pref[i] % n)) % n`. This ensures that the result is always positive, and it correctly represents the remainder when dealing with negative numbers.
