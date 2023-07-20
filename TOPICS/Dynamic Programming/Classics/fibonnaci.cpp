#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

const int MAXN = 100;
int dp[MAXN];

int fibo(int n)
{
    // If it's already calculated return it!
    if (dp[n])
    {
        return dp[n];
    }
    // if it's not calculated and n<=1 return 1 and record the result in the dp array!
    else if (n <= 1)
    {
        return dp[n] = 1;
    }
    // Caching
    return dp[n] = fibo(n - 1) + fibo(n - 2);
}

// Instead of going Top Bottom, let's go iteratively bottom top!
int fibo_iterative(int n)
{
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main()
{
    // Iterative dp
    cout << fibo_iterative(5) << endl;
    // Recursive dp
    cout << fibo(5) << endl;

    cout << flush;
    return 0;
}