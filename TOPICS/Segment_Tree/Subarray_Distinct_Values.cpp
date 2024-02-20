/**  /\_/\
 *   (= ._.)
 *   / > \>
 *
 * Salam Marouane :)
 * ダークホース!
 *
 */

#include <bits/stdc++.h>

using namespace std;

#define _USE_MATH_DEFINES
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
template <typename T>
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

// Problem's code
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> V(n);
    for (auto &i : V)
    {
        cin >> i;
    }
    map<int, int> mpp;
    set<int> mst;

    ll i = 0, j = 0, ans = 0;
    while (j < n)
    {
        mpp[V[j]]++;
        mst.insert(V[j]);
        while (mst.size() > k)
        {
            if (mpp[V[i]]-- == 1)
            {
                mst.erase(V[i]);
            }
            i++;
        }
        ans += j - i + 1;
        j++;
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