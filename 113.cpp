class Solution {
public:
    void helper(TreeNode* root, int targetSum)
    {
        if(!root)
            return;
        path.push_back(root->val);
        targetSum-=root->val;
        if(targetSum==0&&!root->right&&!root->left)
            ans.push_back(path);
        
        helper(root->left,targetSum);
        helper(root->right,targetSum);
        
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        helper(root, targetSum);
        return ans;
    }
    
private :
    vector<vector<int>> ans;
    vector<int> path;
};
