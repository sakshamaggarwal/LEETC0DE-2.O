class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size()-1;
        int i=0;

        while(i<=n)
        {
            int mid=i+(n-i)/2;cout<<nums[mid];
            if(nums[mid]==target || nums[i]==target || nums[n]==target)
                return true;
            else if(nums[i]==nums[mid]&&nums[n]==nums[mid])
            {
                ++i;
                --n;
            }
            else if(nums[i]<=nums[mid])
            {
                if(target>nums[i]&&target<nums[mid])
                    n=mid-1;
                else
                    i=mid+1;
            }
            else
            {
                if(target<nums[n]&&target>nums[mid])
                    i=mid+1;
                else
                    n=mid-1;
            }
        }
        return false;
    }
};
