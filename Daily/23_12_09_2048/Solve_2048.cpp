class Solution {
public:

    bool foo(int num, int* vis){
        while(num){
            vis[num%10]++;
            num /= 10;
        }
        for(int i = 0; i < 10; i++){
            if(vis[i] != 0 && vis[i] != i) return false;
        }
        return true;
    }
    
    int nextBeautifulNumber(int n) {
        int *vis = (int*)malloc(sizeof(int) * 10);
        for(int i = n + 1; i; i++){
            memset(vis, 0, sizeof(*vis) * 10);
            if(foo(i, vis))  return i;
        }
        return -1;
    }
};