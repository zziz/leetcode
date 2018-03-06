class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=nums[0],i,j,sum=0;
        for(i=0;i<nums.size();i++){
            sum+=nums[i];
            ans=max(sum,ans);
            sum=max(sum,0);
        }
        return ans;
    }
};