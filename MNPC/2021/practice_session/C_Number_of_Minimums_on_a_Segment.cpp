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

struct item
{
    int min, count;
};

struct segtree
{
    int size;
    vector<item> values;
    item NEUTRAL = {INT_MAX, 0};

    item merge(item a, item b)
    {
        if (a.min > b.min)
            return b;
        if (a.min < b.min)
            return a;
        return {a.min, a.count + b.count};
    }

    item single_item(int v)
    {
        return {v, 1};
    }

    void build(vector<int> &nums)
    {
        size = 1;
        while (size < nums.size())
            size *= 2;
        values.resize(2 * size);
        build(nums, 0, 0, size);
    }

    void build(vector<int> &nums, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            if (lx < nums.size())
            {
                values[x] = single_item(nums[lx]);
            }
        }
        else
        {
            int m = (lx + rx) / 2;
            build(nums, 2 * x + 1, lx, m);
            build(nums, 2 * x + 2, m, rx);
            values[x] = merge(values[2 * x + 1], values[2 * x + 2]);
        }
    }

    void set(int i, int v)
    {
        set(i, v, 0, 0, size);
    }

    void set(int i, int v, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            values[x] = single_item(v);
        }
        else
        {
            int m = (lx + rx) / 2;
            if (i < m)
            {
                set(i, v, 2 * x + 1, lx, m);
            }
            else
            {
                set(i, v, 2 * x + 2, m, rx);
            }
            values[x] = merge(values[2 * x + 1], values[2 * x + 2]);
        }
    }

    item query(int l, int r)
    {
        return query(l, r, 0, 0, size);
    }

    item query(int l, int r, int x, int lx, int rx)
    {
        if (r <= lx)
            return NEUTRAL;
        if (l >= rx)
            return NEUTRAL;
        if (lx >= l && rx <= r)
            return values[x];
        int m = (lx + rx) / 2;
        item s1 = query(l, r, 2 * x + 1, lx, m);
        item s2 = query(l, r, 2 * x + 2, m, rx);
        return merge(s1, s2);
    }
};

// Problem's code
void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<int> V(n);
    for (int i = 0; i < n; i++)
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
            auto res = st.query(a, b);
            cout << res.min << " " << res.count << endl;
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