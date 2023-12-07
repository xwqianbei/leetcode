class Solution {
public:
    int ans = 0;
    
    int* arr;

    void dfs(vector<vector<pair<int, int> > >& vec, int num){
        arr[num] = 1;
        for(int i = 0; i < vec[num].size(); i++){
            int e = vec[num][i].first, f = vec[num][i].second;
            if(arr[e] == 0){
                if(f == 0){
                    ans++;
                }
                dfs(vec, e);
            }
        }
    }

    int minReorder(int n, vector<vector<int>>& connections) {
        arr = (int*)malloc(sizeof(int) * (n + 1));
        memset(arr, 0, sizeof(*arr) * (n + 1));
        vector<vector<pair<int, int> > > vec(n);

        for(int i = 0; i < connections.size(); i++){
            int s = connections[i][0], e = connections[i][1];
            vec[s].push_back({e, 0});
            vec[e].push_back({s, 1});
        }
        dfs(vec, 0);
        return ans;
    }


};