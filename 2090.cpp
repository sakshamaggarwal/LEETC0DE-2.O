class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        
        vector<int> ans(n,-1);
        if(n<=2*k)
            return ans;
        int divident=(k*2)+1;
        long before=nums[0];
        long after=0;
        int temp=k;
        
        while(temp)
        {
            before+=nums[temp];
            after+=nums[k+temp];
            --temp;
        }
        for(int i=k;i<n-k;++i)
        {
            if(i==k)
            {
                ans[i]=(before+after)/divident;
                continue;
            }
            before=before-nums[i-k-1];
            after=after+nums[i+k];
            ans[i]=(before+after)/divident;
        }
        return ans;
    }
};

/*
    7 4 3 9 1 8 5 2 6   B  A
          |             23 14
            |           16 16 
              |         12 22


*/
