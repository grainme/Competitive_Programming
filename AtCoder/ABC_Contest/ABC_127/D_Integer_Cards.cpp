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
    int n, k;
    cin >> n >> k;
    vector<int> V(n);
    for (int i = 0; i < n; i++)
    {
        cin >> V[i];
    }
    sort(all(V));

    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        pq.push({b, a});
    }
    ll sm = 0, akhir_wa7ed_edited = 0, prev = 0;
    while (!pq.empty())
    {
        auto x = pq.top();
        pq.pop();
        auto it = upper_bound(all(V), x.first);

        if (it != V.begin())
        {
            --it;
            int ind = it - V.begin() - akhir_wa7ed_edited + 1;
            int mn_ind = min(x.second, ind);
            if (mn_ind >= 0)
            {
                prev = akhir_wa7ed_edited;
                akhir_wa7ed_edited += mn_ind;
                sm += (akhir_wa7ed_edited - prev) * x.first;
            }
        }
    }

    for (int i = akhir_wa7ed_edited; i < n; i++)
    {
        sm += V[i];
    }
    cout << sm << endl;
}

// Main function
int main()
{
    fast_io();
    solve();
}

// Check Constraints next_permutation?
// Long long or int !?