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
    ll N, ans = 0;
    cin >> N;

    // We're going to solve this problem with O(N * sqrt(N))
    // idea is simple, instead of searching for a,b,c,d that satisfies the condition!
    // let's simplify the equation a*b + c*d = N --> X + Y = N
    // Now it's just O(n^2) but why? because if X is found then Y is just N-X
    // X can be found easily, X = k*m --> this can be done O(sqrt(N))
    // we loop k = 1 --> sqrt(X) and then check if X % k == 0 (btw nice little trick)
    // Trick : if X != k*k then  we have two cases example, 6=3*2=2*3 or 4=2*2
    // Same thing goes for Y
    // in Total we have O(N) * (O(sqrt(N)) + O(sqrt(N)))  = O(Nsqrt(N))

    for (int i = 1; i < N; i++)
    {
        ll X = i, Y = N - i, x = 0, y = 0;
        for (int k = 1; k * k <= X; k++)
        {
            if (X % k == 0) 
            {
                x++;
                x += (X != k * k);
            }
        }
        for (int k = 1; k * k <= Y; k++)
        {
            if (Y % k == 0)
            {
                y++;
                y += (Y != k * k);
            }
        }
        ans += x * y;
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