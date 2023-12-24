class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
        long long i = 1;
        while(2 * i * (i + 1) * (2 * i + 1) < neededApples) i++;
        return i * 8;
    }
};