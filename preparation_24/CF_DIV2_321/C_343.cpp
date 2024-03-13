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

bool check(ll n)
{
    string s = to_string(n);
    int sz = (int)s.size();
    for (int i = 0; i < sz / 2; i++)
    {
        if (s[i] != s[sz - i - 1])
        {
            return false;
        }
    }
    return true;
}

// Problem's code
void solve()
{
    ll n;
    cin >> n;
    // cbrt(343) cubic sqrt
    ll mx = 1;
    for (ll i = 1; i < (ll)1e6; i++)
    {
        if (pow(i, 3) <= n)
        {
            if (check(pow(i, 3)))
            {   
                mx = pow(i, 3);
            }
        }
        else
        {
            break;
        }
    }
    cout << mx << endl;
}

// Main function
int main()
{
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?