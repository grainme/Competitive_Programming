#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Read the number of coins
    long long n;
    cin >> n;

    // Create a vector to store the coin values
    vector<long long> coins(n);

    // Read the coin values and store them in the vector
    for (long long i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    // Sort the coin values in ascending order
    sort(coins.begin(), coins.end());

    // Initialize the answer to 1
    long long ans = 1;

    // Iterate through the sorted coin values
    for (long long i = 0; i < n; i++)
    {
        // If the current coin value is less than or equal to the answer,
        // it means we can form the sum of 'ans + coins[i]'
        if (coins[i] <= ans)
        {
            // Add the coin value to the answer to update it
            ans += coins[i];
        }
        else
        {
            // If the current coin value is greater than the answer,
            // it means we have found the smallest sum that cannot be created.
            // Since 'coins' is sorted in ascending order, if 'coins[i]' is greater
            // than 'ans', we won't be able to form the sum 'ans' using the previous
            // coins as well. Therefore, we break out of the loop.
            break;
        }
    }

    // Print the smallest sum that cannot be created
    cout << ans << endl;
}
