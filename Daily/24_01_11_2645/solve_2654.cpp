class Solution {
public:
    int addMinimum(string word) {
        int ans = 0;
        char pre = ' ';
        for(int i = 0; i < word.size(); i++){
            char ch = word[i];
            if(i == 0){
                if(ch == 'a'){}
                else if(ch == 'b'){ans += 1;}
                else if(ch == 'c'){ans += 2;}
            }
            else{
                if(ch == 'a'){
                    if(pre == 'a'){ans += 2;}
                    else if(pre == 'b'){ans += 1;}
                }
                else if(ch == 'b'){
                    if(pre == 'a'){}
                    else if(pre == 'b'){ans += 2;}
                    else{ans += 1;};
                }
                else if(ch == 'c'){
                    if(pre == 'a'){ans += 1;}
                    else if(pre == 'b'){}
                    else if(pre == 'c'){ans += 2;}
                }
            }
            pre = ch;
        }
        if(pre == 'a')  ans += 2;
        else if(pre == 'b') ans += 1;
        return ans;
    }
};