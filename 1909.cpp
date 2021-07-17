class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        
        int n=nums.size();
        bool seen=false;
        int prev=nums[0];
        
        for(int i=1;i<n;i++)
        {
            if(nums[i]<=prev)
            {
                if(seen)
                    return false;
                seen=true;
                if(i==1||nums[i]>nums[i-2])
                    prev=nums[i];
            }
            else
                prev=nums[i];
        }
        return true;
    }
};
