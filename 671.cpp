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
    long second=LONG_MAX;
    void helper(TreeNode* root, int first)
    {
        if(!root)
            return;
        if(root->val>first && root->val<second)
            second=root->val;

        helper(root->left,first);
        helper(root->right,first);
    }
    int findSecondMinimumValue(TreeNode* root) {
        if(!root)
            return -1;
        int first=root->val;
        
        helper(root,first);
        return second<LONG_MAX ? second : -1;
    }
};
