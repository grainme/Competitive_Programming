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

struct segtree
{
    ll size;
    vector<ll> vv;

    void build(vector<ll> &nums)
    {
        size = 1;
        while (size < nums.size())
            size *= 2;
        vv.assign(2 * size, 0);
        build(nums, 0, 0, size);
    }

    void build(vector<ll> &nums, ll x, ll lx, ll rx)
    {
        if (rx - lx == 1)
        {
            if (lx < nums.size())
            {
                vv[x] = nums[lx];
            }
        }
        else
        {
            ll m = (lx + rx) / 2;
            build(nums, 2 * x + 1, lx, m);
            build(nums, 2 * x + 2, m, rx);
            vv[x] = vv[2 * x + 1] + vv[2 * x + 2];
        }
    }

    void set(ll i, ll v)
    {
        set(i, v, 0, 0, size);
    }

    void set(ll i, ll v, ll x, ll lx, ll rx)
    {
        if (rx - lx == 1)
        {
            vv[x] = v;
        }
        else
        {
            ll m = (lx + rx) / 2;
            if (i < m)
            {
                set(i, v, 2 * x + 1, lx, m);
            }
            else
            {
                set(i, v, 2 * x + 2, m, rx);
            }
            vv[x] = vv[2 * x + 1] + vv[2 * x + 2];
        }
    }

    ll sum(ll l, ll r)
    {
        return sum(l, r, 0, 0, size);
    }

    ll sum(ll l, ll r, ll x, ll lx, ll rx)
    {
        if (r <= lx)
            return 0;
        if (l >= rx)
            return 0;
        if (lx >= l && rx <= r)
            return vv[x];
        ll m = (lx + rx) / 2;
        ll s1 = sum(l, r, 2 * x + 1, lx, m);
        ll s2 = sum(l, r, 2 * x + 2, m, rx);
        return s1 + s2;
    }
};

// Problem's code
void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> V(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> V[i];
    }
    segtree st;
    st.build(V);
    while (q--)
    {
        ll op, a, b;
        cin >> op >> a >> b;
        if (op == 1)
        {
            st.set(a, b);
        }
        else
        {
            ll res = st.sum(a, b);
            cout << res << endl;
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