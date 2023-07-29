/**  /\_/\
 *   (= ._.)
 *   / > \>
 *
 * Salam Marouane :)
 * ダークホース!
 *
 */

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define _USE_MATH_DEFINES
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define debug(x) cout << (#x) << " = " << x << endl
#define rep(start, end, step) for (int i = start; i < end; i += step)
#define all(v) ((v).begin()), ((v).end())
#define rall(v) ((v).rbegin()), ((v).rend())
#define endl "\n"
#define pi M_PI
#define cin_str(s) (getline(cin, s))

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
    vector<string> A = {
        "###.?????",
        "###.?????",
        "###.?????",
        "....?????",
        "?????????",
        "?????....",
        "?????.###",
        "?????.###",
        "?????.###",
    };
    int n, m;
    cin >> n >> m;
    vector<string> V;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        V.push_back(s);
    }

    for (int i = 0; i < n - 8; i++)
    {
        for (int k = 0; k < m - 8; k++)
        {
            string s1 = V[i].substr(k, 3);
            string s2 = V[i + 1].substr(k, 3);
            string s3 = V[i + 2].substr(k, 3);
            string s4 = V[i + 3].substr(k, 3);
            string s5 = V[i + 4].substr(k, 3);
            string s6 = V[i + 5].substr(k, 3);

            cout << s1 << endl;
            if (s1 == "###" && s2 == "###" && s3 == "###" && s4 == "###" && s5 == "###" && s6 == "###")
            {
                if(V[i][k+3]=='.' && V[i+1][k+3]=='.' && V[i+2][k+3]=='.' && V[i+3][k]=='.' && V[i+3][k+1]=='.' && V[i+3][k+2]=='.' && V[i+3][k+3]=='.'){
                    if()
                }
            }
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