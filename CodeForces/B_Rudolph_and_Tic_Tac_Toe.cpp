/**  /\_/\
*   (= ._.)
*   / > \>
*
* Salam Marouane :)
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

//----------CONSTANTS----------
const ll inf = INT_MAX;
const long long MOD = 1e9 + 7;
#define eps 1e-9
//----------GLOBALS----------

void fast_io() {
  ios::sync_with_stdio(NULL);
  cin.tie(NULL), cout.tie(NULL);
}

ll n, m, k, q, l, r, x, y, z;
const ll template_array_size = 1e6 + 8432;
ll a[template_array_size];
ll b[template_array_size];
ll c[template_array_size];
string s, t, row1, row2, row3;
ll ans = 0;

vector<ll> adj[100005];
bool visited[100005] = {false};

// Problem's code
void solve() {
    int t;
    cin >> t;

    while (t--) {
        vector<string> b(3);
        for (auto& row : b) cin >> row;

        string r;

        for (int i = 0; i < 3; i++) {
            if (b[i][0] != '.' && b[i][0] == b[i][1] && b[i][1] == b[i][2]) {
                r = b[i][0];
                break;
            }

            if (b[0][i] != '.' && b[0][i] == b[1][i] && b[1][i] == b[2][i]) {
                r = b[0][i];
                break;
            }
        }

        if (b[0][0] != '.' && b[0][0] == b[1][1] && b[1][1] == b[2][2]) {
            r = b[0][0];
        } else if (b[0][2] != '.' && b[0][2] == b[1][1] && b[1][1] == b[2][0]) {
            r = b[0][2];
        }

        if (r.empty()) cout << "DRAW" << endl;
        else cout << r << endl;
    }

}

// Main function
int main() {
  fast_io();
  solve();
}