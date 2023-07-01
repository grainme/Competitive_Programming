/**  /\_/\
*   (= ._.)
*   / > \>
*
* Salam Marouane :)
*/

#include <bits/stdc++.h>
using namespace std;

#define _USE_MATH_DEFINES
typedef long long int ll;
typedef vector<int> vi;
#define debug(x) cout << (#x) << " = " << x << endl
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

void fast_io(bool ans, string s) {
  ios::sync_with_stdio(NULL);
  cin.tie(NULL), cout.tie(NULL);
  if(ans){
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
  }
}

struct cell
{
    int x;
    int y;

    // Overloading the less than operator for comparing cells
    bool operator<(const cell& other) const
    {
        // Compare x-coordinates first
        if (x != other.x)
            return x < other.x;
        // If x-coordinates are equal, compare y-coordinates
        return y < other.y;
    }
};


// Problem's code
void solve() {
  int t = 1;
  // cin >> t; // Number of test cases, currently set to 1
  while (t--) {
     int n;
     cin >> n; // Number of steps
     cell cell_one = {0, 0}; // Starting cell at (0, 0)
     vector<pair<int, cell>> visited; // Vector to store visited cells along with the time step
     int time_so_far = 0; // Counter for the time step
     for(int i = 0; i < n; i++){
        int steps;
        char direction;
        cin >> direction >> steps; // Input the direction and number of steps

        // Iterate over each step
        for(int i = 1; i <= steps; i++){
            if(direction == 'N'){
                cell_one.y += 1; // Move one step north (increment y-coordinate)
            }
            else if(direction == 'S'){
                cell_one.y -= 1; // Move one step south (decrement y-coordinate)
            }
            else if(direction == 'E'){
                cell_one.x += 1; // Move one step east (increment x-coordinate)
            }
            else{
                cell_one.x -= 1; // Move one step west (decrement x-coordinate)
            }
            time_so_far++; // Increment the time step
            visited.push_back(make_pair(time_so_far, cell_one)); // Store the visited cell along with the time step
        }
     }

     map<cell, int> mpp; // Map to store the latest time step for each cell
     int min_so_far = 1e9; // Initialize the minimum time difference to a large value
     for(int i = 0; i < visited.size(); i++){
        if(mpp[visited[i].second] != 0){
            // If the cell has been visited before, update the minimum time difference if necessary
            min_so_far = min(min_so_far,(visited[i].first - mpp[visited[i].second]));
        }
        // Update the latest time step for the cell
        mpp[visited[i].second] = visited[i].first;
     }
     // Output the minimum time difference (or -1 if no repeated cells)
     cout << (min_so_far==1e9?-1:min_so_far) << endl; 
  }
}


// Main function
int main() {
  fast_io(true, "mowing");
  solve();
}
