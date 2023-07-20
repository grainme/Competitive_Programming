/**  /\_/\
 *   (= ._.)
 *   / > \>
 *
 * Salam Marouane :)
 *
 */

#include <bits/stdc++.h>
using namespace std;

#define _USE_MATH_DEFINES
typedef long long int ll;
typedef vector<int> vi;
#define all(v) ((v).begin()), ((v).end())
#define endl "\n"

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
    vector<ll> V(n);
    for (auto &i : V)
    {
        cin >> i;
    }
    // sum1 (sundu9 lewel) sum2 (dkchi li mkinch f sundu9 lewel li huwa sundu9 tani)
    // Ghadi ntchekiw kula subset mumkin (complexity total : O(2^N * N) )
    // example : 3ndna vector fl 2assl huwa {1, 2, 3}
    // normalement bech n generiw subset kena kanchufu lbits li ch3lin o kan stockihum f vector
    // OK NICE, db ila kan lbit cha3el ghanzidu f sum1 // sum1 += V[i];
    // Ila kan lbit tafi ghadi nzidu f sum2 // sum2 += V[i]
    // apres meni ghadi ndur 3la bitstring kamela ghadi nakhud abs(sum2 - sum1) sf ontracki lminimum global
    // mital :  subset is {1}  ( donc li tafin huma :  {2, 3}) ---> sum1 = 1 ; sum2 = 5 --> diff = 4
    // subset is {1, 2} w li tafin huma {3} --> diff = | sum1 - sum2 | = 3 - 3 = 0
    // ......
    ll ans = LONG_MAX, sum1, sum2;
    for (ll mask = 0; mask < (1 << n); mask++)
    {
        sum1 = 0, sum2 = 0;
        for (ll i = 0; i < n; i++)
        {
            if (mask & (1ll << i))
            {
                sum1 += V[i];
            }
            else
            {
                sum2 += V[i];
            }
        }
        ans = min(ans, abs(sum1 - sum2));
    }
    cout << ans << endl;
}

// Main function
int main()
{
    fast_io();
    solve();
}