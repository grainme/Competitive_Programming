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

int near_element(vector<int> &arr, int target)
{
    auto it = lower_bound(all(arr), target);
    if (it == arr.begin())
    {
        return *it;
    }
    else if (it == arr.end())
    {
        return *(--it);
    }
    auto prev = *(it - 1);
    auto next = *(it + 1);
    return (abs(target - prev) > abs(target - next) ? next : prev);
}

// Problem's code
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> A(n);
    vector<int> B(m);
    for (auto &i : A)
    {
        cin >> i;
    }
    for (auto &i : B)
    {
        cin >> i;
    }
    sort(B.begin(), B.end());
    sort(A.begin(), A.end());
    int mini = 1e9 + 8;
    for (int i = 0; i < min(n, m); i++)
    {
        mini = min(mini, abs(A[i] - near_element(B, A[i])));
    }
    for (int i = 0; i < min(n, m); i++)
    {
        mini = min(mini, abs(B[i] - near_element(A, B[i])));
    }
    cout << mini << endl;
}

// Main function
int main()
{
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?