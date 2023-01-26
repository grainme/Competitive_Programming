## Problem's remarks:
The provided code is a greedy solution to the problem.

The key point of this approach is that the code is sorting the vector of puzzles, so the neighboring elements in the sorted vector have the minimum difference possible. By iterating over the sorted vector and for each iteration, it takes a subvector of size n, this subvector contains the puzzles that will be selected and it's guaranteed that the difference between the max and min of this subvector is minimized by the sorting step, so this approach is consistent with the greedy strategy which is to make the locally optimal choice at each step with the hope of finding the global optimal solution.

By sorting the array, the greedy approach is able to find the minimum difference between the max and min of subsets by iterating over the subsets.

## Space \ Time Complexity:
The space complexity of this solution is O(t) and time complexity is O(t*log(t)) because of the sort function.

# Code
```
// Problem's code
void solve()
{
  int n,t,x, res = INF;
  cin >> n >> t;
  vi V;
  for(int i = 0; i < t; i++)
  {
    cin >> x;
    V.push_back(x);
  }
  sort(all(V));
  for(int i = 0; i < t-n+1; i++)
  {
    res = min(res,V[i+n-1] - V[i]);
  }
  cout << res << endl;
}
 
```
