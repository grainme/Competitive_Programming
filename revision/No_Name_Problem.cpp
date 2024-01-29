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
    ll n, k;
    cin >> n >> k;
    // The idea should be O(n*log^2(n))
    // Sliding Window + Binary Search (using multiset)
    vector<ll> V;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        V.push_back(a);
    }

    ll i = 0, j = n, len = n, ans = 0;
    if(n==1){
        if(V[0] <= k){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
        return;
    }
    while (i <= j) {
        len = (j + i) / 2;
        bool found = false;
        multiset<ll> mst;

        for (ll index = 0; index < n; index++) {
            if (index >= len) {
                mst.erase(V[index - len]);
            }
            mst.insert(V[index]);

            cout << endl;
            if (index >= len) {
                if (*prev(mst.end()) - *mst.begin() <= k) {
                    found = true;
                    break;
                }
            }
        }

        if (found) {
            ans = len;
            i = len + 1;
        } else {
            j = len - 1;
        }
    }
    cout << ans << endl;
}

// Main function
int main()
{
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?