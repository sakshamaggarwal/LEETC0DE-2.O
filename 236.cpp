/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* helper(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if(!root||root->val==p->val||root->val==q->val)
            return root;
        TreeNode* rootLeft=helper(root->left,p,q);
        TreeNode* rootRight=helper(root->right,p,q);
        if(!rootLeft)
            return rootRight;
        else if(!rootRight)
            return rootLeft;
        return root;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return helper(root,p,q);
    }
};
