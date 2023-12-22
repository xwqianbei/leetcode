class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> q;
        int len = piles.size(), sum = 0;
        for(int i = 0; i < len; i++){
            sum += piles[i];
            q.push(piles[i]);
        }
        
        while(k--){
            int num = q.top();
            sum -= num / 2;
            q.pop();
            q.push(num - num / 2);
        }

        return sum;
    }
};