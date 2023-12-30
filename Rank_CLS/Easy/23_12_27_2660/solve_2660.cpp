class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int v1 = 0, v2 = 0;
        for(int i = 0; i < player1.size(); i++){
            v1 += player1[i];   v2 += player2[i];
            if(i == 1 && player1[i - 1] == 10)  v1 += player1[i];
            if(i == 1 && player2[i - 1] == 10)  v2 += player2[i];

            if(i > 1 && (player1[i - 1] == 10 || player1[i - 2] == 10)) v1 += player1[i];
            if(i > 1 && (player2[i - 1] == 10 || player2[i - 2] == 10)) v2 += player2[i]; 
        }
        if(v1 > v2) return 1;
        if(v2 > v1) return 2;
        return 0;
    }
};