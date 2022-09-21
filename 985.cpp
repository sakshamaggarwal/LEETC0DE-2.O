class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        
        int evenSum=0;
        for(int i:nums)
            if(i%2==0)
                evenSum+=i;
        vector<int> ans;
        for(vector<int> v:queries)
        {
            int index=v[1];
            int val=v[0];
            if(nums[index]%2==0)
                evenSum-=nums[index];
            nums[index]+=val;
            if(nums[index]%2==0)
                evenSum+=nums[index];
            ans.push_back(evenSum);
        }
        return ans;
    }
};
