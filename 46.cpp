class Solution {
public:
    void generate(vector<vector<int>>& ans, int i, vector<int> nums)
    {
        if(i==nums.size())
            ans.push_back(nums);
        for(int j=i;j<nums.size();j++)
        {
            swap(nums[i],nums[j]);
            generate(ans,i+1,nums);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> ans;
        generate(ans,0,nums);
        return ans;
    }
};
