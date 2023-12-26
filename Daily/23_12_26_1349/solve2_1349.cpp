#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

class Solution {
public:
    int getnum(int x){
        int cnt = 0;
        while(x){
            if((x & 1) == 1)  cnt ++;
            x = x >> 1;
        }
        return cnt;
    }

    bool check1(int x, int row, vector<vector<char>>& s){
        int n = s[0].size();
        for(int i = 0; i < n; i++){
            if(s[row][i] == '#' && (x & (1 <<(n - i - 1))) >= 1 ) return false;
            if(i != 0 && (x & (1 << (n - i - 1))) >= 1 && (x & 1 << (n - i)) >= 1)    return false;
        }    
        // cout << (x & (1 << (n - 2 - 1))) << " " << (x & (1 << (n - 2))) << endl;
        return true;
    }

    bool check2(int x, int y, int n){
        for(int i = 0; i < n; i++){
            if(i != n - 1 && (x & (1 << (n - i - 1))) >= 1 && (y & (1 << (n - i - 2))) >= 1)    return false;
            if(i != 0 && (x & (1 << (n - i - 1))) >= 1 && (y & (1 << (n - i))) >= 1) return false;
        }
        return true;
    }

    int maxStudents(vector<vector<char>>& seats) {
        int m = seats.size(), n = seats[0].size();
        int len = int(pow(2, n));
        vector<vector<int>> dp(m + 1, vector<int>(len, 0));
        int ans = 0;

        for(int i = 1; i <= m; i++){
            for(int j = 0; j < len; j++){
                if(check1(j, i - 1, seats))
                    for(int k = 0; k < len; k++)
                        if(check2(j, k, n)){
                            dp[i][j] = max(dp[i][j], dp[i - 1][k] + getnum(j)); 
                            
                        }    
                // cout << dp[i][j] << " ";
                if(i == m) ans = max(ans, dp[i][j]);       
            }
            // cout << endl;
        }
    
        return ans;

    }
};

int main()
{
    vector<vector<char> > seats = {{'#','.','.','.','#'},
                                  {'.','#','.','#','.'},
                                  {'.','.','#','.','.'},
                                  {'.','#','.','#','.'},
                                  {'#','.','.','.','#'}};

    Solution s;
    // cout << s.check1(14, 0, seats);
    int ans = s.maxStudents(seats);
    cout << ans;                       

    return 0;
}