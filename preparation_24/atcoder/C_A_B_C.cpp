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
    int n, m, l;
    cin >> n;
    multiset<int> A, B, C;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        A.insert(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        B.insert(x);
    }
    cin >> l;
    for (int i = 0; i < l; i++)
    {
        int x;
        cin >> x;
        C.insert(x);
    }
    int q;
    cin >> q;
    multiset<ll> sums;
    for (auto &i : A)
    {
        for (auto &k : B)
        {
            for (auto &j : C)
            {
                sums.insert(i + j + k);
            }
        }
    }
    while (q--)
    {
        ll a;
        cin >> a;
        bool res = false;
        if (sums.find(a) != sums.end())
        {
            res = true;
        }
        cout << (res ? "Yes" : "No") << endl;
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