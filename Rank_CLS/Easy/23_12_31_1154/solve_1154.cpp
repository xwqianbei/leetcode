class Solution {
public:
    int dayOfYear(string date) {
        int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int b[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int y = 0, m = 0, d = 0;
        for(int i = 0; i < date.size(); i++){
            if(i < 4)   y += int((date[i] - '0') * pow(10, (3 - i)));
            else if(i > 4 && i < 7) m +=  int((date[i] - '0') * pow(10, (6 - i)));
            else if(i > 7)  d += int((date[i] - '0') * pow(10, (9 - i)));
        }
        int ans = 0;
        if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0){
            for(int i = 1; i < m; i++)  ans += b[i - 1];
            ans += d;
        }
        else{
            for(int i = 1; i < m; i++)  ans += a[i - 1];
            ans += d;
        }
        return ans;

    }
};