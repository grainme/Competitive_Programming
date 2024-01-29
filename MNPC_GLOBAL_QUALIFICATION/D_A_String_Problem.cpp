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
    string s;
    cin >> s;
    ll q;
    cin >> q;
    ll sz = s.size();
    while (q--)
    {
        ll a;
        cin >> a;
        if (a == 1)
        {
            string q_s;
            cin >> q_s;
            ll sz_k = q_s.size();
            bool found_1 = false;
            for (ll i = 0; i < sz; i++)
            {
                bool found = true;
                for (ll k = 0; k < sz_k; k++)
                {
                    if (q_s[k] != s[i + k])
                    {
                        found = false;
                        break;
                    }
                }
                if (found == true)
                {
                    found_1 = true;
                    cout << i + 1 << endl;
                    break;
                }
            }
            if (!found_1)
            {
                cout << -1 << endl;
            }
        }
        else
        {
            ll id;
            char c;
            cin >> id >> c;
            s[id - 1] = c;
        }
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