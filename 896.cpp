class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;++i)
        {
            if(nums[i]<nums[i-1])
            {
                while(i<n)
                    if(nums[i-1]<nums[i++])
                        return false;
            }
            else if(nums[i]>nums[i-1])
            {
                 while(i<n)
                    if(nums[i-1]>nums[i++])
                        return false;
            }
        }
        return true;
    }
};
