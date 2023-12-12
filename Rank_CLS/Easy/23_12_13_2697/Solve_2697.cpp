class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        while(i < j){
            if(int(s[i]) < int(s[j])){
                s[j] = s[i];
            }
            else{
                s[i] = s[j];
            }
            i++; j--;
        }
        return s;
    }
};