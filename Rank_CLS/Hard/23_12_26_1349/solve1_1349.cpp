class Solution {
public:
    bool check1(int x, int y, int m, int n){
        if(x >= 0 && x < m && y >= 0 && y < n)  return true;
        return false;
    }

    vector<pair<int, int>> move{{0, -1}, {-1, -1}, {0, 1}, {-1, 1}};

    bool check2(int x, int y, vector<vector<int>> & vis){
        for(int i = 0; i < 4; i++){
            int tx = x + move[i].first, ty = y + move[i].second;
            if(check1(tx, ty, vis.size(), vis[0].size()) && vis[tx][ty] == 1) return false;
        }
        return true;
    }

    int cnt = 0; 
    int ans = 0;
    void dfs(int x, int y, vector<vector<int>>& vis, vector<vector<char>>& s){
        if(x == s.size())   return;
        if(s[x][y] == '.' && check2(x, y, vis)){
            vis[x][y] = 1;
            cnt += 1;
            if(x == s.size() - 1 && y == s[0].size() - 1){ans = max(ans, cnt);  cnt -= 1; vis[x][y] = 0;return;}
            else{
                if(y == s[0].size() - 1) dfs(x + 1, 0, vis, s);
                else dfs(x, y + 1, vis, s);
                cnt -= 1;
                vis[x][y] = 0;
            }
        }
        if(x == s.size() - 1 && y == s[0].size() - 1){   ans = max(ans, cnt); return;}
        if(y == s[0].size() - 1) dfs(x + 1, 0, vis, s);
        else dfs(x, y + 1, vis, s);
    }
    
    int maxStudents(vector<vector<char>>& seats) {
        int m = seats.size(), n = seats[0].size();
        vector<vector<int> > vis(m, vector<int>(n, 0));
        dfs(0, 0, vis, seats);
        return ans;
    }
};