class Solution {
public:
    int getnextidx(int* a, int pre){
        for(int i = pre; i >= 0; i--){
            if(a[i] > 0)    return i;
        }
        return -1;
    }
    string repeatLimitedString(string s, int repeatLimit) {
        int cnt[26];    memset(cnt, 0, sizeof(cnt));
        for(auto ch : s)    cnt[ch - 'a']++;
        int idx = getnextidx(cnt, 25), pc = 0;
        string ans = "";

        for(int i = 0; i < s.size(); i++){
            if(cnt[idx] == 0){
                if(idx == 0)    break;
                idx = getnextidx(cnt, idx);
                if(idx == -1)   break;
                ans += idx + 'a';
                cnt[idx]--;
                pc = 1;
            }
            else if(pc == repeatLimit){
                int nextidx = getnextidx(cnt, idx - 1);
                if(nextidx == -1)   break;
                ans += nextidx + 'a';
                cnt[nextidx]--;
                pc = 0;
            }
            else{
                ans += idx + 'a';
                cnt[idx]--;
                pc++;
            }
        }
        return ans;
    }
};