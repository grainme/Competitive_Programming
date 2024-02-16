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

bool works(int cupsPoured, int h, int c, int t)
{
    double totalBarrelTemperature =
        (h * (cupsPoured + 1) + c * (cupsPoured));
    double totalCupsPoured = (double)(2 * cupsPoured + 1.0);
    double avgBarrelTemperature = totalBarrelTemperature / totalCupsPoured;
    return avgBarrelTemperature >= t;
}

// Problem's code
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int h, c, t;
        cin >> h >> c >> t;
        int l = 0, r = 10, mid, maximumCups = 500;
        while (l <= r)
        {
            mid = (r + l) / 2;
            if (works(mid, h, c, t))
            {
                maximumCups = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (maximumCups == 1e6 + 1)
        {
            cout << 2 << endl;
        }
        else
        {
            /*
             * The solution must lie between barrel1 and barrel2 if the total number
             * of cups is odd. barrel1 represents the barrel with an average
             * temperature slightly greater than t. barrel2 represent the
             * barrel with an average temperature slightly less than t.
             * These two barrels will be the closest to t.
             */
            double totalBarrel1 =
                (h * (maximumCups + 1) + c * maximumCups);
            double totalBarrel2 =
                (h * (maximumCups + 2) + c * (maximumCups + 1));
            double barrel1Cups = (double)(2 * maximumCups + 1.0);
            double barrel2Cups = (double)(2 * maximumCups + 3.0);
            double avgBarrel1 = totalBarrel1 / barrel1Cups;
            double avgBarrel2 = totalBarrel2 / barrel2Cups;
            double hot_cold_avg = (h + c) / 2.0;

            double minAbsDifference =
                min({abs(t - avgBarrel1), abs(t - avgBarrel2),
                     abs(t - hot_cold_avg)});

            /*
             * If the minimum absolute difference from t is
             * hot_cold_avg, then it suffices to print 2. Otherwise, print
             * the barrel with the minimum absolute difference from t.
             */
            if (minAbsDifference == abs(t - hot_cold_avg))
            {
                cout << 2 << endl;
            }
            else if (minAbsDifference == abs(t - avgBarrel1))
            {
                cout << 2 * maximumCups + 1 << endl;
            }
            else
            {
                cout << 2 * maximumCups + 3 << endl;
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