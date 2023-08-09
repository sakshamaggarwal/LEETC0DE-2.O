class Solution {
public:
    int getCount(vector<int> nums, int mid)
    {
        int count=0, i=0;
        while(i<nums.size()-1)
        {
            if(nums[i+1]-nums[i]<=mid)
            {
                count++;
                ++i;
            }
            ++i;
        }
        return count;
    }
    int minimizeMax(vector<int>& nums, int p) {
        int n=nums.size();
        sort(nums.begin(),nums.end());

        int mini=0, maxi=nums[n-1]-nums[0];

        while(mini<maxi)
        {
            int mid=mini+(maxi-mini)/2;
            if(getCount(nums,mid) < p)
            {
                mini=mid+1;
            }
            else
                maxi=mid;
        }
        return mini;
    }
};
