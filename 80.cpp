class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();

        int k=0;
        int j=1;
        for(int i=1;i<n;++i)
        {
            if(k==0&&nums[i-1]==nums[i])
            {
                ++k;
                nums[j]=nums[i];
                ++j;
                continue;
            }
            else if(nums[i-1]!=nums[i])
            {
                k=0;
                nums[j]=nums[i];
                ++j;
            }
            else if(k)
            {
                continue;
            }
        }
        return j;
    }
};
