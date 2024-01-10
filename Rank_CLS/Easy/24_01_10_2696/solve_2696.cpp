class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        int ans = s.size();
        for(auto q : s){
            if(st.empty())  st.push(q);
            else{
                if(q == 'B' && st.top() == 'A') st.pop(), ans -= 2;
                else if(q == 'D' && st.top() == 'C') st.pop(), ans -= 2;
                else st.push(q);
            }
        }
        return ans;
    }
};