#include <bits/stdc++.h>
using namespace std;

// Leetcode Problem : https://leetcode.com/problems/climbing-stairs/

class Solution
{
public:
    int dp[50];

    // This is memoisation type of DP
    int climb(int n)
    {
        if (dp[n] != -1)
        {
            return dp[n];
        }
        if (n == 1)
        {
            return dp[n] = 1;
        }
        else if (n == 2)
        {
            return dp[n] = 2;
        }
        return dp[n] = climb(n - 1) + climb(n - 2);
    }

    // Let's do Tabulation, can we ?
    int climb1(int n)
    {
        dp[0] = 1;
        dp[1] = 2;
        for (int i = 2; i < n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n - 1];
    }

    int climbStairs(int n)
    {
        // dp[i] represents the ways to get the stair i
        memset(dp, -1, sizeof(int) * 50);

        return climb1(n);
    }
};