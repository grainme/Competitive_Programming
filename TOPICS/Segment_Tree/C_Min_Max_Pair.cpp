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
    int n;
    cin >> n;
    vector<int> V(n);
    for (auto &i : V)
    {
        cin >> i;
    }
    vector<int> visited(n + 1, 0);
    ll ans = 0, ans1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (V[i] != i + 1 && V[V[i] - 1] == i + 1)
        {
            if (!visited[V[i]])
            {
                ans++;
            }
            visited[V[i]] = 1;
        }
        else if (V[i] == i + 1)
        {
            ans1++;
        }
    }
    cout << (ans1 * (ans1 - 1) / 2) + ans / 2 << endl;
}

// Main function
int main()
{
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?