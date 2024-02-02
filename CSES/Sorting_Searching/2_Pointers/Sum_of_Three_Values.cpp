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
    int n, x;
    cin >> n >> x;
    vector<int> V(n);
    // Map to track the orginal indices before sorting the array
    map<int, deque<int>> mpp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        V[i] = x;
        mpp[x].push_back(i + 1);
    }
    sort(all(V));
    // I guess we can get away with O(N^2) because N < 5000 !!
    // 1 2 3
    for (int k = 0; k < n; k++)
    {
        int i = 0, j = n - 1;
        // I'm trying to convert this problem to 2_Sum_Problem instead of 3!
        // V[i]  + V[j] = x - V[k]
        int second_member = x - V[k];
        while (i < j)
        {
            if (V[i] + V[j] == second_member && i != k && i != j && k != j)
            {
                cout << mpp[V[i]].front() << " ";
                mpp[V[i]].pop_front();
                cout << mpp[V[j]].front() << " ";
                mpp[V[j]].pop_front();
                cout << mpp[V[k]].front();
                return;
            }
            else if (V[i] + V[j] > second_member)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
}

// Main function
int main()
{
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?