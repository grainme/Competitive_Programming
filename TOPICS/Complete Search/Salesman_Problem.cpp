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

/*
We got 6 cities, we want to visit them all and then go back to the initial city which is in this case 1
1 9 3 2 5 8 (suppose it's a 1D plan, and these are the x's of the cities)
*/

// Problem's code
void solve()
{

    vector<int> arr(6);
    iota(all(arr), 1);
    pair<int, vector<int>> res;
    int ans = 1e9;
    do
    {
        int sum = 0;
        for (int i = 0; i < 6; i++)
        {
            // (i+1)%6 to get back to the intial point (city)
            sum += abs(arr[i] - arr[(i + 1) % 6]);
        }
        if (sum < ans)
        {
            ans = sum;
            res.first = ans;
            res.second = arr;
        }
    } while (next_permutation(all(arr)));
    for (auto &i : res.second)
    {
        cout << i << " ";
    }
    cout << endl;
}

// Main function
int main()
{
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?