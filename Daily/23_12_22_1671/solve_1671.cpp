class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        int len = nums.size(); 
        vector<int> dpl(len + 1, 1);
        vector<int> dpr(len + 1, 1);

        dpl[0] = 1;
        for(int i = 1; i < len; i++){
            for(int j = 0; j < i; j++){
                if(nums[i] > nums[j]){
                    dpl[i] = max(dpl[i], dpl[j] + 1);
                }
            }
        }

        dpr[len - 1] = 1;
        for(int i = len - 2; i >= 0; i--){
            for(int j = len - 1; j > i; j--){
                if(nums[i] > nums[j]){
                    dpr[i] = max(dpr[i], dpr[j] + 1);
                }
            }
        }

        int ans = 0;
        for(int i = 1; i < len - 1; i++){
            if(dpl[i] != 1 && dpr[i] != 1)
                ans = max(ans, dpl[i] + dpr[i] - 1);
        }

        return len - ans;        
    }
};