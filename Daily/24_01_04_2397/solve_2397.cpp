class Solution {
public:
    bool check1(int t, int* vis, int numSelect, int n){
        int isone = 0;
        for(int i = 0; i < n; i++){
            if(t & 1 == 1){ vis[n - i - 1] = 1; isone++;}
            t = t >> 1;
        }
        if(isone > numSelect)    return false;
        return true;
    }
    int check(vector<vector<int>>& matrix, int* vis){
        int m = matrix.size(), n = matrix[0].size(), ans = 0;
        
        for(int i = 0; i < m; i++){
            bool f = true;
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 0) continue;
                if(vis[j] == 0){f = false;  break;} 
            }
            if(f)   ans++;
        }
        return ans;
    }
    int maximumRows(vector<vector<int>>& matrix, int numSelect) {
        int m = matrix.size(), n = matrix[0].size(), ans = 0;
        int nums = pow(2, n);

        int* vis = (int*)malloc(sizeof(int) * n);

        for(int i = 0; i < nums; i++){
            memset(vis, 0, sizeof(int) * n);
            if(!check1(i, vis, numSelect, n)) continue;
            // cout << i << endl;
            // for(int j = 0; j < n; j++){
            //     cout << vis[j] << " ";
            // }
            // cout << "\n" << check(matrix, vis) << endl;
            ans = max(ans, check(matrix, vis));
        }
        return ans;
        
    }
};