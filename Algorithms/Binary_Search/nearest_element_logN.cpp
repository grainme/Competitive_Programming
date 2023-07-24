#include <bits/stdc++.h>
using namespace std;

// This is the code to find the nearest element to a target in a sorted array
int near_element(vector<int> &arr, int target)
{
    auto it = lower_bound(arr.begin(), arr.end(), target);
    if (it == arr.begin())
    {
        return *it;
    }
    else if (it == arr.end())
    {
        return *(--it);
    }
    auto prev = *(it - 1);
    auto next = *(it + 1);
    return (abs(target - prev) > abs(target - next) ? next : prev);
}

int main(void)
{
    return;
}