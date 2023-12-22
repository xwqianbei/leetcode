class Solution {
public:
    long long maximumSumOfHeights(vector<int>& maxHeights) {

        int len = maxHeights.size();
        long long ans = 0;
        stack<int> st1, st2;
        vector<long long> l(len + 1, 0);
        vector<long long> r(len + 1, 0);
        
        for(int i = 0; i < len; i++){
            while(!st1.empty() && maxHeights[i] < maxHeights[st1.top()]) st1.pop();
            if(st1.empty()){
                l[i] = (long long)(i + 1) * maxHeights[i];
            }
            else{
                l[i] = (long long)(i - st1.top()) * maxHeights[i] + l[st1.top()];
            }
            st1.push(i);
        }
        reverse(maxHeights.begin(), maxHeights.end());
        for(int i = 0; i < len; i++){
            while(!st2.empty() && maxHeights[i] < maxHeights[st2.top()]) st2.pop();
            if(st2.empty()){
                r[i] = (long long)(i + 1) * maxHeights[i];
            }
            else{
                r[i] = (long long)(i - st2.top()) * maxHeights[i] + r[st2.top()];
            }
            st2.push(i);
        }
        for(int i = 0; i < len; i++){
            ans = max(ans, l[len - 1 - i] + r[i] - maxHeights[i]);
        }
        
        
        
        return ans;
    }
};