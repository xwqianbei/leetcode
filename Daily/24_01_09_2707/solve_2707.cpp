class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int n = dictionary.size(), l = s.size();
        set<string> u;
        for(auto t : dictionary){
            u.insert(t);
        }
        int INF = 0x3f3f3f3f;
        vector<int> dp(l + 1, INF);
        dp[0] = 0;
        for(int i = 1; i <= l; i++){
            for(int j = 1; j <= i; j++){
                string ss = s.substr(j - 1, i - j + 1);
                if(u.count(ss) > 0){
                    dp[i] = min(dp[i], dp[j - 1]);
                }
                else{
                    dp[i] = min(dp[i], dp[j - 1] + i + 1- j);
                }
            }
        }
        return dp[l];
    }
};