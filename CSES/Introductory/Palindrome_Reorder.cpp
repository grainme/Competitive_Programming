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
    string s;
    cin >> s;
    map<char, int> mpp;
    for (auto &i : s)
    {
        mpp[i]++;
    }
    int odd = 0;
    for (auto &i : mpp)
    {
        if (i.second & 1)
        {
            odd++;
        }
    }
    if (odd > 1)
    {
        cout << "NO SOLUTION" << endl;
        return;
    }
    multiset<char> left, right, middle;
    for (auto &i : mpp)
    {
        if (i.second % 2 == 0)
        {
            for (int k = 0; k < i.second / 2; k++)
            {
                left.insert(i.first);
            }

            for (int k = 0; k < i.second / 2; k++)
            {
                right.insert(i.first);
            }
        }
        else
        {
            middle.insert(i.first);
        }
    }
    for (auto &i : left)
    {
        cout << i;
    }
    for (auto &i : middle)
    {
        cout << i;
    }
    multiset<char>::reverse_iterator rit;

    // prints all elements in reverse order
    for (rit = right.rbegin(); rit != right.rend(); rit++)
        cout << *rit;
}

// Main function
int main()
{
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?