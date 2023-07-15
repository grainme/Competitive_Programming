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
    string s;
    cin >> s;

    ll ans = 0;
    // Loop over all possible combinations of inserting '+' between digits
    // The number of combinations is 2^(s.size()-1)
    for (long long bit = 0; bit < (1 << (s.size() - 1)); bit++)
    {
        int fow = 0; // Starting index of the current substring
        int bac = 0; // Ending index of the current substring

        // Iterate over each position in the string
        for (int i = 0; i < s.size() - 1; i++)
        {
            // Check if the current bit is set in the combination
            if (bit & (1 << i))
            {
                bac = i + 1; // Set the ending index to the current position
                cout << stoll(s.substr(fow, bac - fow)) << endl;
                // Evaluate the substring between fow and bac, convert it to a number, and add it to ans
                ans += stoll(s.substr(fow, bac - fow));
                fow = bac; // Move the starting index to the current position
            }
            
        }
        if(bit==1){
            break;
        }
        // Evaluate the remaining substring from the last '+' position to the end of the string and add it to ans

        ans += stoll(s.substr(fow, s.size() - fow));
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