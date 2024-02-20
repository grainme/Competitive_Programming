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
    string s;
    cin >> s;
    int q;
    cin >> q;
    int n = (int)s.size();
    vector<int> ind(n + 5);
    for (int i = 1; i <= n; i++)
    {
        ind[i] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ind[i] << " ";
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << s[ind[i] - 1] << " ";
    }
    cout << endl;
    int ans = 0;
    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        vector<int> temp_V(n + 5);
        map<char, vector<int>> mpp;
        temp_V = ind;
        for (int i = l; i <= r; i++)
        {
            int temp = i;
            temp = temp - l + 1;
            temp = (((temp + k) % (r - l + 1)) == 0 ? r - l + 1 : ((temp + k) % (r - l + 1)));
            temp = temp + l - 1;
            temp_V[i] = ind[temp];
        }
        ind = temp_V;
        for (int i = 1; i <= n; i++)
        {
            cout << temp_V[i] << " ";
        }
        cout << endl;
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