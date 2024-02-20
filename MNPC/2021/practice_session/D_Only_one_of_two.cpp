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

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

ll lcm(int a, int b)
{
    return (ll)a / gcd(a, b) * b;
}

ll countDivisible(int N, int M, ll interval)
{
    ll lcm_value = lcm(N, M);
    ll div_N = interval / N;
    ll div_M = interval / M;
    ll divisible_bjuj = interval / lcm_value;
    return div_N + div_M - (2 * divisible_bjuj);
}

// Problem's code
void solve()
{
    int n, m;
    ll k;
    cin >> n >> m >> k;

    ll low = 1;
    ll high = 2e18;

    while (low < high)
    {
        ll mid = low + (high - low) / 2;
        ll count = countDivisible(n, m, mid);
        if (count < k)
            low = mid + 1;
        else
            high = mid;
    }

    cout << low << endl;
}

// Main function
int main()
{
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?