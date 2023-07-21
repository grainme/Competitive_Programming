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

/*

Summary :

- (mask & -mask) this operation preserves the rightmost set bit and unset every other bit

- We're going to XOR the last element of the vector (deque better or even a stack) with
  (mask & -mask), but why? so to make sure every two consecutive element we have are
  differ in only one bit (so flipping just one bit would give the other bitset)

- I used a deque just for the sake of simplicity

- Time Complexity of this code is : O(2^n)
*/

// Problem's code
void solve()
{
    // We need to geneate a list of 2^n elements where two consecutive elements
    // differ in only one bit, basically, we're constructing a Gray Code!
    int n;
    cin >> n;
    // Deque to push the representation in base 10
    deque<int> dq;
    dq.push_back(0);
    // We loop through all the "binaries" till 2^n - 1
    for (int mask = 1; mask < (1 << n); mask++)
    {
        dq.push_back(dq.back() ^ (mask & -mask));
    }
    for (auto &i : dq)
    {
        bitset<16> bitMask(i);
        for (int i = n - 1; i >= 0; i--)
        {
            cout << bitMask[i];
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
