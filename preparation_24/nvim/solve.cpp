/**  /\_/\
 *   (= ._.)
 *   / > \>
 *
 * Salam Marouane :)
 * ダークホース!
 *
 */

#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

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

int n;
vector<int> V;
deque<int> subset;

void search(int ind) {
  if (ind == n) {
    // process subset
    for (auto &i : subset) {
      cout << i << " ";
    }
    cout << endl;
  }

  else {
    search(ind + 1);
    subset.push_back(V[ind]);
    search(ind + 1);
    subset.pop_back();
  }
}

// Problem's code
void solve() {
  cin >> n;
  V.resize(n);
  for (auto &i : V) {
    cin >> i;
  }
  search(0);
  // cout << choose(0, 0, 0) << endl;
}

// Main function
int main() {
  fast_io();
  solve();
}

// Check Constraints next_permutation?
// Long long or int !?
