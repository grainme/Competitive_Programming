/**  /\_/\
 *   (= ._.)
 *   / > \>
 *
 * Salam Marouane :)
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
#define MOD 1000000007
#define cin_str(s) (getline(cin, s))

//----------CONSTANTS----------
const ll inf = INT_MAX;
// const long long MOD = 1e9 + 7;
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
    deque<char> A, B, C;
    string a, b, c;
    cin >> a >> b >> c;
    for (auto &i : a)
    {
        A.push_back(i);
    }
    for (auto &i : b)
    {
        B.push_back(i);
    }
    for (auto &i : c)
    {
        C.push_back(i);
    }

    char init = A.front();
    A.pop_front();

    while (true)
    {
        if (init == 'c')
        {
            if (C.empty())
            {
                cout << "C" << endl;
                return;
            }
            init = C.front();
            C.pop_front();
        }

        else if (init == 'b')
        {
            if (B.empty())
            {
                cout << "B" << endl;
                return;
            }
            init = B.front();
            B.pop_front();
        }   

        else if (init == 'a')
        {
            if (A.empty())
            {
                cout << "A" << endl;
                return;
            }
            init = A.front();
            A.pop_front();
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