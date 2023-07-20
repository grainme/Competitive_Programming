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

// Problem's code
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi V(n);
        for (auto &i : V)
        {
            cin >> i;
        }
        bool res = false;
        sort(all(V));
        ll sum = 0;
        vector<ll> prefix, suffix;
        // For Blue
        for (int i = 0; i < n; i++)
        {
            sum += V[i];
            prefix.push_back(sum);
        }
        sum = 0;
        // For RED
        for (int i = n - 1; i >= 0; i--)
        {
            sum += V[i];
            suffix.push_back(sum);
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (suffix[i] > prefix[i + 1])
            {
                res = true;
                break;
            }
        }
        cout << (res ? "YES" : "NO") << endl;
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