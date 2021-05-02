class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n=nums.size(),ans=nums[0];
        
        for(int i=1;i<n;i++)
        {
            nums[i]=max(nums[i],nums[i]+nums[i-1]);
            ans=max(nums[i],ans);
        }
        return ans;
    }
};
