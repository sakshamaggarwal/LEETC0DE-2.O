class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();

        int zeroCount=0;
        int j=0;
        int ans=0;

        for(int i=0;i<n;++i)
        {
            zeroCount+=(nums[i]==0);

            while(zeroCount>1)
            {
                zeroCount-=(nums[j]==0);
                j++;
            }
            ans=max(ans,i-j+1);
        }
        return ans-1;
    }
};
