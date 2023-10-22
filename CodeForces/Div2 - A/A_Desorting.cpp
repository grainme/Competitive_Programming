/*
*
* ダークホース!
*  
*/

#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define _USE_MATH_DEFINES
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define debug(x) cout << (#x) << " = " << x << endl
#define rep(start, end, step) for(int i = start; i < end; i += step)
#define all(v) ((v).begin()), ((v).end())
#define rall(v) ((v).rbegin()), ((v).rend())
#define endl "\n"
#define pi M_PI
#define cin_str(s) (getline(cin, s))

void fast_io() {
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &i : arr) {
            cin >> i;
        }
        if (!is_sorted(arr.begin(), arr.end())) {
            cout << 0 << endl;
            continue;
        }
        pair<pair<int, int>, int> min_diff = {{0, n - 1}, 1e9 + 7};
        for (int i = 0; i < n; i++) {
            for (int k = i + 1; k < n; k++) {
                if (arr[k] - arr[i] <= min_diff.second) {
                    min_diff.first = {i, k};
                    min_diff.second = arr[k] - arr[i];
                }
            }
        }
        ll ans = 0;
        int mid = arr[min_diff.first.first] + arr[min_diff.first.second];
        cout << mid / 2 - min(arr[min_diff.first.first], arr[min_diff.first.second]) + 1 << endl;
    }
}

int main() {
    fast_io();
    solve();
}
