class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> res;
        for(int i = 0; i < findNums.size(); i++)
        {
            int flag = 0;
            int k;
            for(k = 0; k < nums.size(); k++)
            {
                if(findNums[i] == nums[k]) break;
            }
            
            for(int j = k+1; j < nums.size(); j++)
            {
                if(nums[j] > findNums[i])
                {
                    flag = 1;
                    res.push_back(nums[j]);
                    break;
                }
            }
            if(flag == 0) res.push_back(-1);
        }
        return res;
    }
};