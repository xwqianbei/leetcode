class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        if(tomatoSlices - 2 * cheeseSlices < 0)  return {};
        if((tomatoSlices - 2 * cheeseSlices) % 2 == 1)  return{};
        if((tomatoSlices - 2 * cheeseSlices) / 2 > cheeseSlices) return{};
        return {(tomatoSlices - 2 * cheeseSlices) / 2, cheeseSlices - (tomatoSlices - 2 * cheeseSlices) / 2};
    }
};