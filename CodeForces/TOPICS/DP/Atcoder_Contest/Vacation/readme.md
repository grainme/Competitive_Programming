dp[i] = the max points gained from day 0 up to day i
dp[i+1] = max(dp[i+1], dp[i]+max_mst_with_diff_index);
dp[0] = 0