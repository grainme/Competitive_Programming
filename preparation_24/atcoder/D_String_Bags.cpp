#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

const int INF = 1e9;

int main()
{
    string T;
    cin >> T;

    int N;
    cin >> N;

    vector<vector<string>> bags(N);
    vector<vector<int>> dp(T.size() + 1, vector<int>(101, INF));

    dp[0][0] = 0;

    for (int i = 0; i < N; ++i)
    {
        int A;
        cin >> A;
        for (int j = 0; j < A; ++j)
        {
            string s;
            cin >> s;
            bags[i].push_back(s);
        }
    }

    for (int i = 1; i <= T.size(); ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            for (int k = 0; k < bags[j].size(); ++k)
            {
                int len = bags[j][k].size();
                if (i >= len && T.substr(i - len, len) == bags[j][k])
                {
                    dp[i][j + 1] = min(dp[i][j + 1], dp[i - len][j] + 1);
                }
            }
            dp[i][j + 1] = min(dp[i][j + 1], dp[i][j]);
        }
    }

    int result = dp[T.size()][N];
    if (result == INF)
        result = -1;

    cout << result << endl;

    return 0;
}
