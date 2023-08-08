class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size()-1;
        int i=0;

        while(i<=n)
        {
            int mid=i+(n-i)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>=nums[i])
                if(nums[mid]>=target && nums[i]<=target)
                    n=mid-1;
                else
                    i=mid+1;
            else
                if(target<=nums[n] && target>=nums[mid])
                    i=mid+1;
                else
                    n=mid-1;
        }
        return -1;
    }
};
