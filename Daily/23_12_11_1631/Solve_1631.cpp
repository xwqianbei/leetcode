class Solution {
public:
    int ans = 1e6 + 10;
    int n, m;
    vector<pair<int, int> > mv = {{0, 1}, {1, 0},{0, -1},{-1, 0},};
    int vis[110][110];
    bool check(int x, int y){
        if(x < 0 || y < 0 || x >= m || y >= n)  return false;
        return true;
    }
    void dfs(vector<vector<int>>& h, int x, int y, int tans){
        if(x == m - 1 && y == n - 1){
            ans = min(ans, tans);
            return;
        }
        vis[x][y] = 1;
        // cout<<'(' << x << ',' << y << ')' << tans << " ";
        int tx = -1, ty = -1;
        for(int i = 0; i < 4; i++){
            tx = x + mv[i].first; ty = y + mv[i].second;
            if(check(tx, ty) && vis[tx][ty] == 0){
                if(tans >= ans) continue;
                dfs(h, tx, ty, max(tans, abs(h[x][y] - h[tx][ty])));
            }
        }
        vis[x][y] = 0;
        return;
    }
    int minimumEffortPath(vector<vector<int>>& heights) {
        m = heights.size();
        n = heights[0].size();
        memset(vis, 0, sizeof(vis));
        dfs(heights, 0, 0, 0);
        return ans;
    }
};
//TLE
