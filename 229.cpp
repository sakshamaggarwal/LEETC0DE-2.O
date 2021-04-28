class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size(),k=0;
        vector<int> ans;
        int p;
        if(n>2)
            p=n/3;
        else
            p=0;
        for(int i=0;i<n;i++)
        {
            k=1;
            while(i<n-1&&nums[i]==nums[i+1])
            {
                k++;
                i++;
            }
            if(k>p)
                ans.push_back(nums[i]);
        }
        return ans;
    }
};
