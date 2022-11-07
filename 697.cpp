class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n=nums.size();
        map<int,int> m;
        int temp=0;
        for(int i: nums)
        {
            m[i]++;
            if(m[i]>temp)
                temp=m[i];
        }
        if(temp==1)
            return 1;
        int ans=INT_MAX;
        for(auto it:m)
        {
            if(it.second==temp)
            {
                int i=0;
                int j=n-1;
                while(i<j&&it.first!=nums[i])
                    i++;
                while(i<j&&it.first!=nums[j])
                    j--;
                ans=min(ans,j-i+1);
            }
        }
        return ans;
    }
};
