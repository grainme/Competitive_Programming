/**  /\_/\
 *   (= ._.)
 *   / > \>
 *
 * Salam Marouane :)
 */

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define _USE_MATH_DEFINES
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define debug(x) cout << (#x) << " = " << x << endl
#define rep(start, end, step) for (int i = start; i < end; i += step)
#define all(v) ((v).begin()), ((v).end())
#define rall(v) ((v).rbegin()), ((v).rend())
#define endl "\n"
#define pi M_PI
#define cin_str(s) (getline(cin, s))

//----------CONSTANTS----------
const ll inf = INT_MAX;
const long long MOD = 1e9 + 7;
#define eps 1e-9
//----------GLOBALS----------

void fast_io()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL), cout.tie(NULL);
}

const int MAXN = 1e5 + 7;
int dp[MAXN][3];
vector<vector<int>> V;

// Bottom Top Approach
int find_max(int n)
{
    dp[0][1] = V[0][1];
    dp[0][2] = V[0][2];
    dp[0][0] = V[0][0];
    for (int i = 1; i < n; i++)
    {
        dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + V[i][0];
        dp[i][1] = max(dp[i - 1][2], dp[i - 1][0]) + V[i][1];
        dp[i][2] = max(dp[i - 1][1], dp[i - 1][0]) + V[i][2];
    }
    int arr[3] = {dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]};
    return *max_element(arr, arr + 3);
}

// Problem's code
void solve()
{
    int n;
    cin >> n;
    memset(dp, 0, sizeof(int) * MAXN);
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        V.push_back({a, b, c});
    }
    cout << find_max(n) << endl;
}

// Main function
int main()
{
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?