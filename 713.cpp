class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int prod=1;
        int ans=0;
        int j=0;
        for(int i=0;i<n;i++)
        {
            prod*=nums[i];
            while(j<=i&&prod>=k)
            {
                prod/=nums[j];
                j++;
            }
            ans+=i-j+1;
        }
        return ans;
    }
};
