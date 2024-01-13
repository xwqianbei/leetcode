class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string, int> mp1, mp2;
        int ans = 0;
        for(auto s1 : words1){
            mp1[s1]++;
        }
        for(auto s2 : words2){
            if(mp1[s2] != 1)  continue;
            else {
                if(mp2.count(s2) == 0)  ans++;
                else if(mp2[s2] == 1) ans--;
                mp2[s2]++;
            }    
        }
        return ans;
    }
};