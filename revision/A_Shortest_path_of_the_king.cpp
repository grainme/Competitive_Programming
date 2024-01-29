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
    pair<char, int> p1;
    pair<char, int> p2;
    string s, q;
    cin >> s >> q;
    p1.first = s[0];
    p1.second = s[1];
    p2.first = q[0];
    p2.second = q[1];

    int mv = 0;
    vector<string> res;
    while (p1.first != p2.first || p2.second != p1.second)
    {
        if (p1.first != p2.first && p2.second == p1.second)
        {
            if (p2.first > p1.first)
            {
                p1.first = (char)(p1.first + 1);
                res.push_back("R");
            }
            else
            {
                p1.first = (char)(p1.first - 1);
                res.push_back("L");
            }
        }
        else if (p1.first == p2.first && p2.second != p1.second)
        {
            if (p2.second > p1.second)
            {
                p1.second++;
                res.push_back("U");
            }
            else
            {
                p1.second--;
                res.push_back("D");
            }
        }
        else if (p1.first != p2.first && p2.second != p1.second)
        {
            if (p1.second > p2.second && p1.first < p2.first)
            {
                p1.second--;
                p1.first = (char)(p1.first + 1);
                res.push_back("RD");
            }
            else if (p1.second > p2.second && p1.first > p2.first)
            {
                p1.second--;
                p1.first = (char)(p1.first - 1);
                res.push_back("LD");
            }
            if (p1.second < p2.second && p1.first < p2.first)
            {
                p1.second++;
                p1.first = (char)(p1.first + 1);
                res.push_back("RU");
            }
            else if (p1.second < p2.second && p1.first > p2.first)
            {
                p1.second++;
                p1.first = (char)(p1.first - 1);
                res.push_back("LU");
            }
        }
        mv++;
    }
    cout << mv << endl;
    for(auto &i: res){
        cout << i << endl;
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