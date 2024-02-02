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
    multiset<int> on;
    multiset<int> off;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        on.insert(a);
        off.insert(b);
    }
    // lewel time imta tchedt, taniya ra9m dyl lghurfa
    multiset<pair<int, int>> rooms;
    int nbr_room = 0, ans = 0;
    vector<int> res;
    for (auto &i : on)
    {
        if (*off.begin() >= i)
        {
            nbr_room++;
            rooms.insert({*off.begin(), nbr_room});
            res.push_back(nbr_room);
        }
        else
        {
            nbr_room--;
            res.push_back((*rooms.begin()).second);
            rooms.erase(rooms.begin());
        }
        ans = max(ans, nbr_room);
    }
    cout << ans << endl;
    for (auto &i : res)
    {
        cout << i << " ";
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