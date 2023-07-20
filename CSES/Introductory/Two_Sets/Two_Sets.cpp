/**  /\_/\
 *   (= ._.)
 *   / > \>
 *
 * Salam Marouane :)
 * ダークホース!
 *
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

// 3 2 1

// 7 4 3 = 14

// 6 5 2 1= 11

// 7654321
// abbabbabba

// Problem's code
void solve()
{
  int n;
  cin >> n;
  vector<int> V(n);

  iota(all(V), 1);
  set<int> A, B;
  if (((n * (n + 1)) / 2) & 1)
  {
    cout << "NO" << endl;
    return;
  }
  sort(rall(V));
  int i = 0;
  while (i < n)
  {
    A.insert(V[i]);
    A.insert(V[i + 3]);
    B.insert(V[i + 2]);
    B.insert(V[i + 1]);
    if (i + 4 < n)
    {
      i += 4;
    }
    else
    {
      break;
    }
  }
  if (n - i == 3)
  {
    A.insert(V[i]);
    B.insert(V[i + 1]);
    B.insert(V[i + 2]);
  }

  if (n - i == 2)
  {
    A.insert(V[i]);
    B.insert(V[i + 1]);
  }

  if (n - i == 1)
  {
    A.insert(V[i]);
  }
  bool res1 = false, res2 = false;
  for (auto &i : B)
  {
    if (i == 0)
    {
      res1 = true;
    }
  }
  for (auto &i : A)
  {
    if (i == 0)
    {
      res2 = true;
    }
  }
  cout << "YES" << endl;
  cout << A.size() - (res2 ? 1 : 0) << endl;
  for (auto &i : A)
  {
    if (i != 0)
    {
      cout << i << " ";
    }
  }

  cout << endl
       << B.size() - (res1 ? 1 : 0) << endl;
  for (auto &i : B)
  {
    if (i != 0)
    {
      cout << i << " ";
    }
  }
  cout << endl;
}

// Main function
int main()
{
  fast_io();
  solve();
}