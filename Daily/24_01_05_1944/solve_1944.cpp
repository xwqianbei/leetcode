class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        stack<pair<int, int> > st;
        int n = heights.size(); 
        vector<int> ans(n, 0);
        for(int i = n - 1; i >= 0; i--){
            int val = 0;
            while(!st.empty()){
                if(heights[i] > st.top().second){
                    val++;
                    st.pop();
                }
                else break;
            }
            if(st.empty())  ans[i] = val;
            else ans[i] = val + 1;
            // ans[i] = val + 1;
            st.push({i, heights[i]});
        }
        // ans[n - 1] = 0;
        return ans;
    }
};