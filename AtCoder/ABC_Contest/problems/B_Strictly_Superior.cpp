/**  /\_/\
 *   (= ._.)
 *   / > \>
 *
 * Salam Marouane :)
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
#define MOD 1000000007
#define cin_str(s) (getline(cin, s))

//----------CONSTANTS----------
const ll inf = INT_MAX;
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
    int n, m;
    cin >> n >> m;
    vector<pair<int, vector<int>>> prod;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        int c;
        cin >> c;
        vector<int> V;
        for (int k = 0; k < c; k++)
        {
            int x;
            cin >> x;
            V.push_back(x);
        }
        sort(all(V));
        prod.push_back({p, V});
    }
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            if (i != k)
            {
                if (prod[i].first >= prod[k].first)
                {
                    bool res = true;
                    // I named the iterator i ---> it gave me tons of WA lol, frustrating
                    for (auto &f : prod[i].second)
                    {
                        if (find(all(prod[k].second), f) == prod[k].second.end())
                        {
                            res = false;
                        }
                    }
                    if (res)
                    {
                        if (prod[i].first > prod[k].first)
                        {
                            cout << "Yes" << endl;
                            return;
                        }
                        for (auto &f : prod[k].second)
                        {
                            if (find(all(prod[i].second), f) == prod[i].second.end())
                            {
                                cout << "Yes" << endl;
                                return;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << "No" << endl;
}

// Main function
int main()
{
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?