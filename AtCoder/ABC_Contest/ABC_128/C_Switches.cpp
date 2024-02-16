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
    int nbr_bulbs, nbr_switches;
    cin >> nbr_switches >> nbr_bulbs;
    vector<int> state_for_bulb_to_be_on(nbr_bulbs);
    const int MAXN = 1e5;
    vector<vector<int>> switches_connected_to(MAXN);
    for (int i = 0; i < nbr_bulbs; i++)
    {
        int nbr_switches_for_bulb;
        cin >> nbr_switches_for_bulb;
        for (int k = 0; k < nbr_switches_for_bulb; k++)
        {
            int switch_here;
            cin >> switch_here;
            switches_connected_to[i].push_back(switch_here - 1);
        }
    }

    for (int i = 0; i < nbr_bulbs; i++)
        cin >> state_for_bulb_to_be_on[i];

    int no_of_combinations = 0;
    vector<int> switches_used(nbr_switches);
    // With bitmasking wa can generate also combinations not only subsets sheeesh :)
    ll res = 0;
    for (int mask = 0; mask < (1 << nbr_switches); mask++)
    {
        for (int i = 0; i < nbr_switches; i++)
        {
            if (mask & (1 << i))
            {
                switches_used[i] = 1;
            }
            else
            {
                switches_used[i] = 0;
            }
        }
        bool check = true;
        for (int i = 0; i < nbr_bulbs; i++)
        {
            int ans = 0;
            for (auto &k : switches_connected_to[i])
            {
                if (switches_used[k] == 1)
                {
                    ans++;
                }
            }
            if (ans % 2 != state_for_bulb_to_be_on[i])
                check = false;
        }
        res += check == true;
    }
    cout << res << endl;
}

// Main function
int main()
{
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?