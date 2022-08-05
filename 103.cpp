/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> ans;
    
    void helper(TreeNode* root, int level)
    {
        if(!root)
            return;
        if(level==ans.size())
            ans.push_back({});
        ans[level].push_back(root->val);
        helper(root->left,level+1);
        helper(root->right,level+1);
        
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        helper(root,0);
        int n=ans.size();
        for(int i=1;i<n;i+=2)
            reverse(ans[i].begin(),ans[i].end());

        return ans;        
    }
};
