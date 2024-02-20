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
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        multiset<int> A;
        multiset<int> B;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            A.insert(a);
        }
        for (int i = 0; i < m; i++)
        {
            int a;
            cin >> a;
            B.insert(a);
        }
        // 1 2 4 6
        // 1 2 3 3 5 7

        ll ans = 0;
        while (!A.empty())
        {
            auto it3 = A.begin(), it4 = --A.end();
            auto it1 = B.begin(), it2 = --B.end();

            if (abs(*it3 - *it2) < abs(*it4 - *it1))
            {
                ans += abs(*it4 - *it1);
                B.erase(it1);
                A.erase(it4);
            }
            else
            {
                ans += abs(*it2 - *it3);
                B.erase(it2);
                A.erase(it3);
            }
        }
        cout << ans << endl;
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
