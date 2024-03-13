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
    ll n, d;
    cin >> n >> d;
    vector<pair<ll, ll>> V;
    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        V.push_back({a, b});
    }
    sort(all(V));

    int i = 0, j = 1;
    ll ans = V[0].second, mx = V[0].second;
    while (j < n)
    {
        if (V[j].first - V[i].first >= d)
        {
            ans -= V[i].second;
            i++;
        }
        else
        {
            ans += V[j].second;
            j++;
            mx = max(mx, ans);
        }
    }
    mx = max(mx, ans);
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