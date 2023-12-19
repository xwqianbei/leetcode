class Solution {
public:

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int l = 0, r = mat.size() - 1, j;
        while(l < r){
            int mid = (l + r) >> 1;
            j = max_element(mat[mid].begin(), mat[mid].end()) - mat[mid].begin();
            if(mid + 1 <= mat.size() - 1 && mat[mid + 1][j] > mat[mid][j]) l = mid + 1;
            // else if(mid - 1 >= 0 && mat[mid - 1][j] > mat[mid][j]) r = mid - 1;
            else r = mid;
            // else return{mid, j};
        }
        int pos = max_element(mat[l].begin(), mat[l].end()) - mat[l].begin();
        return {l, pos};
        // return {};
    }
};