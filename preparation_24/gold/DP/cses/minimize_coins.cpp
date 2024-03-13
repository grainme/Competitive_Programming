/**  /\_/\
 *   (= ._.)
 *   / > \>
 *
 * Salam Marouane :)
 * ダークホース!
 *
 */

#include <bits/stdc++.h>

using namespace std;

#define _USE_MATH_DEFINES
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
template <typename T>
#define debug(x) cout << (#x) << " = " << x << endl
#define rep(start, end, step) for (int i = start; i < end; i += step)
#define all(v) ((v).begin()), ((v).end())
#define rall(v) ((v).rbegin()), ((v).rend())
#define endl "\n"
#define pi M_PI
#define cin_str(s) (getline(cin, s))
// Avoid negative modulo (b + (a % b)) % b

//----------CONSTANTS----------
const ll inf = INT_MAX;
const long long MOD = 1e9 + 7;
#define eps 1e-9
//----------GLOBALS----------

void fast_io() {
  ios::sync_with_stdio(NULL);
  cin.tie(NULL), cout.tie(NULL);
}

// Problem's code
void solve() {
  int n, x;
  cin >> n >> x;
  vector<int> V(n);
  for (int i = 0; i < n; i++) {
    cin >> V[i];
  }

  vector<ll> dp(x + 1, (ll)1e18);
  dp[0] = 0;
  for (int i = 1; i <= x; i++) {
    for (auto &c : V) {
      if (i - c >= 0) {
        dp[i] = min(dp[i], dp[i - c] + 1);
      }
    }
  }
  cout << (dp[x] == 0 || dp[x] == 1e9 ? -1 : dp[x]) << endl;
}

// Main function
int main() {
  fast_io();
  solve();
}

// Check Constraints next_permutation?
// Long long or int !?
