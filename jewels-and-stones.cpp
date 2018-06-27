class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int result = 0;
        for(auto& ij : J){
            for(auto& is : S){
                if(ij == is) result++;
            }
        }
        return result;
    }
};