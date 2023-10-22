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
// Avoid negative modulo (b + (a % b)) % b

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

// void usaco()
//{
//   freopen('div7.in', 'r', stdin);
//   freopen('div7.out', 'w', stdout);
// }

// Problem's code
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> V(n);
        for (auto &i : V)
        {
            cin >> i;
        }
        int mx = *max_element(all(V)), mn = *min_element(all(V));
        int i_mn = 0, i_mx = 0;
        int j_mn = 0, j_mx = 0;

        for (int i = 0; i < n; i++)
        {
            if (V[i] == mn)
            {
                i_mn = i;
            }
            else if (V[i] == mx)
            {
                i_mx = i;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (V[i] == mn)
            {
                j_mn = i;
            }
            else if (V[i] == mx)
            {
                j_mx = i;
            }
        }
        int x1 = min(i_mn, n - j_mn + 1);
        int x2 = min(i_mx, n - j_mx + 1);
        cout << min((x1 == 0 || x2 == 0 ? x1 + x2 + 1 : x1 + x2), max(x1, x2) + (max(x1, x2) - min(x1, x2))) << endl;
        // cout << min(i_mn, n - j_mn + 1) << ' ' << min(i_mx, n - j_mx + 1) << endl;
    }
}

// Main function
int main()
{
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?