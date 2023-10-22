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
    map<int, deque<int>> mpp;
    for (int i = 0; i < n; i++)
    {
        cin >> V[i];
        mpp[V[i]].push_front(i + 1);
    }
    sort(all(V));
    for (int i = 0; i < n; i++)
    {
        for (int k = i + 1; k < n; k++)
        {
            int third = x - V[i] - V[k];
            // Khassni n9eleb 3la third = z + w
            int y = k + 1, w = n - 1;
            while (y < w)
            {
                if (V[y] + V[w] < third)
                {
                    y++;
                }
                else if (V[y] + V[w] > third)
                {
                    w--;
                }
                else
                {
                    cout << mpp[V[i]].front() << " ";
                    mpp[V[i]].pop_front();
                    cout << mpp[V[k]].front() << " ";
                    mpp[V[k]].pop_front();
                    cout << mpp[V[y]].front() << " ";
                    mpp[V[y]].pop_front();
                    cout << mpp[V[w]].front() << " ";
                    mpp[V[w]].pop_front();
                    return;
                }
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