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
    int a, b, c;
    cin >> a >> b >> c;
    int t;
    cin >> t;
    vector<pair<int, string>> V;
    for (int i = 0; i < t; i++)
    {
        int a;
        cin >> a;
        string s;
        cin >> s;
        V.push_back({a, s});
    }
    sort(all(V));
    map<string, int> mpp;
    mpp["USB"] = a;
    mpp["PS/2"] = b;
    mpp["Bjuj"] = c;
    ll ans = 0, total = 0;
    for (auto &i : V)
    {
        if (mpp[i.second] > 0)
        {
            ans++;
            total += i.first;
            mpp[i.second]--;
        }
        else if (mpp["Bjuj"] > 0)
        {
            ans++;
            total += i.first;
            mpp["Bjuj"]--;
        }
    }
    cout << ans << " " << total << endl;
}

// Main function
int main()
{
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?