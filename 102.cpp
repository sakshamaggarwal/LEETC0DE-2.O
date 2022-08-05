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
    vector<vector<int>> temp;
    void helper(TreeNode* root, int level)
    {
        if(!root)
            return;
        if(level==temp.size())
            temp.push_back({});
        temp[level].push_back(root->val);
       // if(root->left)
            helper(root->left,level+1);
       // else if(root->right)
            helper(root->right,level+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {

        helper(root,0);
        return temp;
    }
};
