#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;
const int MAXN = 1e6 + 7;
int dp[MAXN];

// Dp
int fact(int n)
{
	if (dp[n] != -1)
	{
		return dp[n];
	}
	if (n == 0)
	{
		return 1;
	}
	return dp[n] = (fact(n - 1) * n) % MOD;
}

int main()
{
	int num;
	cin >> num;
	memset(dp, -1, sizeof(int) * MAXN);
	while (num--)
	{
		int t;
		cin >> t;
		cout << fact(t) << endl;
	}
}