/*
Salam Alyakum Marouane!

Problem : Knapsack Problem
Time Complexity : Brute Force so it's O(n*2^n)
Space Complexity : O(1) [because we don't need to store data in another vector of pairs but whatever!]
UMD Summer Camp --> Discord Server
July-17-2023 Monday at 00:16 AM

ありがとうございます、サムリーさん!

*/

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

// There are other algos that take care of this problem, such as dynamic programming algos...
// To be seen later!

// Naive Recursive Approach
int knapSackRecursive(int w, vector<int> wt, vector<int> val, int n)
{
    // Base case: If there are no items or weight capacity is 0, return 0
    if (n == 0 || w == 0)
    {
        return 0;
    }

    // If the weight of the nth item is more than the remaining capacity, skip it
    if (wt[n - 1] > w)
    {
        return knapSackRecursive(w, wt, val, n - 1);
    }

    // Return the maximum value by either including or excluding the nth item
    int include = val[n - 1] + knapSackRecursive(w - wt[n - 1], wt, val, n - 1);
    int exclude = knapSackRecursive(w, wt, val, n - 1);

    return max(include, exclude);
}

int main()
{
    // Just Fast io, skip
    ios::sync_with_stdio(NULL);
    cin.tie(NULL), cout.tie(NULL);

    int n, w;
    cin >> n >> w;
    vector<int> vals(n), weights(n);
    // items with a pair of value && weight
    vector<pair<int, int>> items;
    for (int i = 0; i < n; i++)
    {
        cin >> vals[i]; // Read the values of the items
    }
    for (int i = 0; i < n; i++)
    {
        cin >> weights[i]; // Read the weights of the items
    }

    // Create a vector of pairs with values and weights
    for (int i = 0; i < n; i++)
    {
        items.push_back({vals[i], weights[i]});
    }

    int max_ever = -1e9 - 7; // Initialize the maximum value found so far
    for (int mask = 0; mask < (1 << n); mask++)
    { 
        // Generate all subsets using bitmasking
        vector<pair<int, int>> bug;
        int max_val = 0, max_weight = 0;
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                bug.push_back(items[i]); // Add items that are included in the current subset
            }
        }

        // Calculate the total value and weight of the subset
        for (auto &k : bug)
        {
            if (max_weight + k.second > w)
            {
                break;
            } // If adding the current item exceeds the weight limit, stop
            max_val += k.first;
            max_weight += k.second;
        }
        max_ever = max(max_ever, max_val); // Update the maximum value found so far
    }

    cout << max_ever << " " << knapSackRecursive(w, weights, vals, n) << endl; // Print the maximum value
}
