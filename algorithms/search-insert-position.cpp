class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        for(auto &it : nums){
            i++;
            if(target > it) continue;
            else{
                return i - 1;
            }
        }
        return i;
        
    }
};