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

void usaco()
{
    freopen("pairup.in", "r", stdin);
    freopen("pairup.out", "w", stdout);
}

// Problem's code
void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> V;
    // i9deru ikunu duplicates f TIME, so using Hashmap will result on a colision
    // if there were no duplicates, it would be a simple logical 2P Question!
    // lkbir m3a sghir sf o dayza! -- ms db kin duplicates which is making the problem slightly dubious!
    for (ll i = 0; i < n; i++)
    {
        ll nbr_cows, time;
        cin >> nbr_cows >> time;
        V.push_back({nbr_cows, time});
    }
    sort(all(V), [&](pair<ll, ll> A, pair<ll, ll> B)
         { return A.second < B.second; });
    ll i = 0, j = n - 1, modL = 0, modR = 0;
    ll max_val = 0;
    while (i < j)
    {
        max_val = max(max_val, V[i].second + V[j].second);
        modL++;
        modR++;
        if (modL >= V[i].first)
        {
            modL = 0;
            i++;
        }
        if (modR >= V[j].first)
        {
            modR = 0;
            j--;
        }
    }
    cout << max_val << endl;
}

// Main function
int main()
{
    usaco();
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?