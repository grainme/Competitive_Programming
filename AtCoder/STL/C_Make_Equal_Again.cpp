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
        int n;
        cin >> n;
        vector<int> V(n);
        for (auto &i : V)
        {
            cin >> i;
        }
        int fr = V[0], cr = V[n - 1];
        int l = 1, r = n - 1;
        ll res = 0;
        bool lb = true, rb = true;
        while (l <= r)
        {
            if (V[l] == fr && lb)
            {
                l++;
            }
            else
            {
                lb = false;
            }
            if (V[r] == fr && rb)
            {
                r--;
            }
            else
            {
                rb = false;
            }
            if (!rb && !lb)
            {
                res = r - l + 1;
                break;
            }
        }
        int l1 = 0, r1 = n - 2;
        ll res1 = 0;
        bool lb1 = true, rb1 = true;
        while (l1 <= r1)
        {
            if (V[l1] == cr && lb1)
            {
                l1++;
            }
            else
            {
                lb1 = false;
            }
            if (V[r1] == cr && rb1)
            {
                r1--;
            }
            else
            {
                rb1 = false;
            }
            if (!rb1 && !lb1)
            {
                res1 = r1 - l1 + 1;
                break;
            }
        }
        cout << min(res, res1) << endl;
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