class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int result = 0, current = 0;
        for(auto& it : nums){
            if(it == 1) {
                current++;
                result = max(current, result);
            }
            else
                current = 0;
        }
        return result;
    }
};