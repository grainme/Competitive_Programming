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
void display(vi &a) {
  for(int z : a)
    cout << z << " ";
  cout << endl;
}
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
const int MAX_N = 2e5;
//----------GLOBALS----------

void fast_io() {
  ios::sync_with_stdio(NULL);
  cin.tie(NULL), cout.tie(NULL);
}

// Problem's code
void solve() {
  int t = 1;
  // cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<pair<pair<int,int>,int>> clients;
    for(int i = 0; i < n; i++){
      int a,d;
      cin >> a >> d;
      clients.push_back(make_pair(make_pair(a,d), i));
    }
    sort(all(clients));

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> departure_and_room;

    int last_room = 1;
    departure_and_room.push(make_pair(clients[0].first.second, last_room));
    vi res(MAX_N);
    res[clients[0].second] = 1;
    for(int i = 1; i < n; i++){
      if(clients[i].first.first <= departure_and_room.top().first){
        last_room++;
        departure_and_room.push(make_pair(clients[i].first.second, last_room));
        res[clients[i].second] = last_room;
      }
      else{
        int room_to_be_leaved = departure_and_room.top().second;
        departure_and_room.push(make_pair(clients[i].first.second, room_to_be_leaved));
        res[clients[i].second] = room_to_be_leaved;
        departure_and_room.pop();
      } 
    }
    cout << *max_element(all(res)) << endl;
    for(int i = 0; i < n; i++){
      cout << res[i] << " ";
    }
    cout << endl;
  }
}

// Main function
int main() {
  fast_io();
  solve();
}
