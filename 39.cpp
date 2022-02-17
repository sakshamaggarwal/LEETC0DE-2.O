class Solution {
public:
    void helper(vector<int> candidates,int target, vector<int> v, vector<vector<int>>& ans,int i)
    {
        if(target==0)
        {
            ans.push_back(v);
            return;
        }
        while(i<candidates.size()&&target-candidates[i]>=0)
        {
            v.push_back(candidates[i]);
            helper(candidates, target-candidates[i],v,ans,i);
            i++;
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        candidates.erase(unique(candidates.begin(),candidates.end()),candidates.end());
        vector<int> v;
        vector<vector<int>> ans;
        helper(candidates, target, v,ans, 0);
        return ans;
    }
};
