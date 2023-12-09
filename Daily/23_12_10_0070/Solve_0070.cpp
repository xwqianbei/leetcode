class Solution {
public:
    int climbStairs(int n) {
        int* dp = (int*)malloc(sizeof(int) * (n + 1));
        memset(dp, 0, sizeof(*dp) * (n + 1));
        dp[0] = dp[1] = 1;
        for(int i = 2; i <= n; i++){
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};