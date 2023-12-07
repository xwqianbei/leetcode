class Solution {
public:
    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
        vector<vector<pair<int, int> > > pre((n + 1));
        for(int i = 0; i < rides.size(); i++){
            int s = rides[i][0], e = rides[i][1], v = rides[i][2];
            pre[e].push_back({s, v});
        }
        long long* dp = (long long*)malloc(sizeof(long long) * (n + 1));
        memset(dp, 0, sizeof(*dp) * (n + 1));

        long long ans = 0;
        for(int i = 2; i <= n; i++){
            for(int j = 0; j < pre[i].size(); j++){
                int s = pre[i][j].first, v = pre[i][j].second;
                dp[i] = max(dp[i], dp[s] + i - s + v);
            }
            dp[i] = max(dp[i], dp[i - 1]);
            ans = max(ans, dp[i]);
        }
        // for(int i = 1; i <= n; i++){
        //     cout << dp[i] << " ";
        // }


        return ans;
        
    }
};