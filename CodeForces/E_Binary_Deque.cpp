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
        int n, k;
        cin >> n >> k;
        vector<int> V(n);
        int sm = 0;
        for (auto &i : V)
        {
            cin >> i;
            sm += i;
        }
        priority_queue<int, vector<int>, greater<int>> ones_i;
        priority_queue<int, vector<int>, greater<int>> ones_j;
        for (int i = 0; i < n; i++)
        {
            if (V[i] == 1)
            {
                ones_i.push(i);
                ones_j.push(n - i - 1);
            }
        }
        int diff = sm - k, i = 0, j = n - 1, op = 0;
        while (diff > 0)
        {
            if (V[i] == 1)
            {
                i++;
                diff--;
                ones_i.pop();
            }
            else if (V[j] == 1)
            {
                j--;
                diff--;
                ones_j.pop();
            }
            else
            {
                int near_j = ones_j.top();
                ones_j.pop();
                int near_i = ones_i.top();
                ones_i.pop();
                if (near_j <= near_i)
                {
                    j--;
                }
                else
                {
                    i++;
                }
            }
            op++;
        }
        if(diff < 0){
            cout << -1 << endl;
        }
        else{
            cout << op << endl;
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