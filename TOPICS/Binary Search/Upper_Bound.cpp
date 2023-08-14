#include <bits/stdc++.h>
using namespace std;

// Searching the smallest Element that is bigger than a target
// Otherwise -1
int Upper_Bound(vector<int> V, int target)
{
    int l = 0, r = V.size() - 1, mid;
    while (l < r)
    {
        mid = (r + l) / 2;
        if (V[mid] > target)
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    return r;
}

int main(void)
{
    int n, target;
    cin >> n >> target;
    vector<int> V(n);
    for (auto &i : V)
    {
        cin >> i;
    }
    cout << Upper_Bound(V, target) << endl;
}