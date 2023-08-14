#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int first_true(int lo, int hi, vector<int> &V, function<bool(int)> ok)
{
    int ans = -1;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        cout << "mid : " << mid << " :  " << V[mid] << endl;
        if (ok(V[mid]))
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL), cout.tie(NULL);

    // Get the index when a function ok(x) going to be TRUE (1)


}