class Solution {
public:
    void check(vector<vector<int>>& ans, vector<int> nums, int i)
    {
        if(i==nums.size())
            ans.push_back(nums);
        else
        {
            for(int j=i;j<nums.size();j++)
            {
                if(j==i||nums[i]!=nums[j])
                {
                    swap(nums[i],nums[j]);
                    check(ans,nums,i+1);
                }
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        check(ans,nums,0);
        return ans;
    }
};
