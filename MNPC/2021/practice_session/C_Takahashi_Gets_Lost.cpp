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
    int h, w, n;
    cin >> h >> w >> n;
    string s;
    cin >> s;
    const int maxn = 600;
    vector<vector<int>> V(maxn, vector<int>(maxn, 0));
    vector<pair<int, int>> lands;
    for (int i = 0; i < h; i++)
    {
        for (int k = 0; k < w; k++)
        {
            char c;
            cin >> c;
            if (c == '#')
            {
                V[i][k] = 0;
            }
            else
            {
                lands.push_back({i, k});
                V[i][k] = 1;
            }
        }
    }
    int ans = 0;
    for (auto &pr : lands)
    {
        int x = pr.first, y = pr.second;
        bool no_good = false;
        for (auto &i : s)
        {
            if (i == 'L')
            {
                y -= 1;
            }
            else if (i == 'R')
            {
                y += 1;
            }
            else if (i == 'U')
            {
                x -= 1;
            }
            else
            {
                x += 1;
            }
            if (x >= 0 && y >= 0 && x < h && y < w && V[x][y] == 0)
            {
                no_good = true;
            }
        }

        if (no_good == false)
        {
            ans++;
        }
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