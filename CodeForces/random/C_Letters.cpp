#include <bits/stdc++.h>
using namespace std;

int first_true(int lo, int hi, function<int(int)> f)
{
    lo--;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        cout << mid << " " << f(mid) << endl;
        if (f(mid) == 0)
        {
            return -2;
        }
        else if (f(mid) == 1)
        {
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return -1;
}

int main()
{

    cout << first_true(1, 10, [](int x)
                       { if(x>4){return 1;}else if(x<4){return -1;}else{return 0;}; })
         << endl;
}