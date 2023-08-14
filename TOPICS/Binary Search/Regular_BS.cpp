#include <bits/stdc++.h>
using namespace std;

// Binary Search to find the index of an element if it exists
// Otherwise -1
int binary_search(vector<int> V, int target)
{
    int l = 0, r = V.size() - 1, mid;
    while (l < r)
    {
        mid = (r + l) / 2;
        if (V[mid] == target)
        {
            return mid;
        }
        else if (V[mid] > target)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
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
    cout << binary_search(V, target) << endl;
}