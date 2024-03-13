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
    ll n, k;
    cin >> n >> k;
    map<ll, ll> mpp, mpp1;
    for (ll i = 1; i <= n; i++)
    {
        mpp1[0]++;
    }

    for (ll i = 0; i < k; i++)
    {
        ll a, b;
        cin >> a >> b;
        if (mpp[a] == 0)
        {
            mpp1[0]--;
            if (mpp1[0] == 0)
            {
                mpp1.erase(mpp1.begin());
            }
        }
        if (mpp[a] > 0)
        {
            mpp1[mpp[a]]--;
            if (mpp1[mpp[a]] == 0)
            {
                auto it = mpp1.find(mpp[a]);
                mpp1.erase(it);
            }
        }
        mpp[a] += b;
        mpp1[mpp[a]]++;

        cout << mpp1.size() << endl;
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