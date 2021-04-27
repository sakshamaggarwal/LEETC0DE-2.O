class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int n=nums.size(),i=0,k=0,ans=0;
        while(i<n)
        {
            k=0;
            while(i<n&&nums[i]==1)
            {
                k++;
                i++;
            }
            ans=max(k,ans);
            i++;
        }
        return ans;
    }
};
