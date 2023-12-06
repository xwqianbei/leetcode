class Solution {
public:
    vector<vector<int> > path(5, vector<int>);
    int* vis;
    int* cnt_level;
    int max_level = -1;

    void dfs(int num, int level){
        max_level = max(max_level, level);
        cnt_level[level] ++;
        vis[num] = 1;
        for(int i = 0; i < path[num].size(); i++){
            if(vis[path[num][i]] == 0){
                dfs(path[num][i], level + 1);
            }
        }
        return;
    }
    
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        long long ans = 0;
        cnt_level = (int*)malloc(sizeof(int) * (roads.size() + 1));
        vis = (int*)malloc(sizeof(int) * (roads.size() + 1));

        memset(cnt_level, 0, sizeof(cnt_level));
        memset(vis, 0, sizeof(vis));

        for(int i = 0; i < roads.size(); i++){
            vector[roads[i][0]].push_back(roads[i][1]);
            vector[roads[i][1]].push_back(roads[i][0]);
        }

        for(int i = max_level; i >= 0; i--){
            ans += i * 
        }
    }
};