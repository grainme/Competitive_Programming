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
map<int, int> temp_map;

map<int, int> binarySearch_Max(int ind, int n, vector<pair<int, int>> temp, vector<int> V)
{
    int i = ind + 1, j = n - 1, mid;
    map<int, int> mpp;
    while (i <= j)
    {
        mid = (i + j) / 2;
        if (temp[mid].first - V[ind] > 0 && temp[mid].second > ind)
        {
            mpp[temp[mid].first - temp[ind].first] = temp[mid].first;
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
    }
    return mpp;
}

map<int, int> binarySearch_Min(int ind, int n, vector<pair<int, int>> temp, vector<int> V)
{
    int i = ind + 1, j = n - 1, mid;
    map<int, int> mpp;
    while (i <= j)
    {
        mid = (i + j) / 2;
        if (temp[mid].first - V[ind] < 0 && temp[mid].second > ind)
        {
            mpp[V[ind] - temp[mid].first] = temp[mid].first;
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }
    return mpp;
}

// Problem's code
void solve()
{
    int n;
    cin >> n;
    vector<int> V(n);
    for (auto &i : V)
    {
        cin >> i;
    }
    vector<pair<int, int>> temp(n);

    for (int i = 0; i < n; i++)
    {
        temp[i] = {V[i], i};
    }
    sort(all(temp));    

    for (int i = 0; i < n; i++)
    {
        // odd
        map<int, int> mpp = binarySearch_Max(i, n, temp, V);
        // even
        map<int, int> mpp1 = binarySearch_Min(i, n, temp, V);

        for (auto &k : mpp1)
        {
            cout << i << " " << k.first << " " << k.second << endl;
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