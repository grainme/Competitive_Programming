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
        ll sm = 0;
        for (auto &i : V)
        {
            cin >> i;
            sm += i;
        }
        if (sm % n != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            bool res = true;
            ll ans = sm / n, rem = 0;
            for (int i = 0; i < n; i++)
            {
                if (V[i] > ans)
                {
                    rem += V[i] - ans;
                }
                else
                {
                    if (rem >= ans - V[i])
                    {
                        rem -= ans - V[i];
                    }
                    else
                    {
                        res = false;
                    }
                }
            }
            cout << (res && rem == 0 ? "YES" : "NO") << endl;
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