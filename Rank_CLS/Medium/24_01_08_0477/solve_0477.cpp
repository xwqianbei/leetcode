class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int ans = 0, n = points.size();
        for(int i = 0; i < n; i++){
            map<int, int> mp;
            for(int j = 0; j < n; j++){
                int l = (points[i][0] - points[j][0]) * (points[i][0] - points[j][0]) + (points[i][1] - points[j][1]) * (points[i][1] - points[j][1]);
                ans += mp[l] * 2;
                mp[l]++;
            }
        }
        return ans;
    }
};