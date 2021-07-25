class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum=n*(n+1)/2;
        vector<int> v;
        
        for(int i=1;i<n;i++)
            if(nums[i]==nums[i-1])
                v.push_back(nums[i]);
        for(int i=0;i<n;i++)
            sum-=nums[i];
        
        sum+=v[0];
        v.push_back(sum);
        return v;
    }
};
