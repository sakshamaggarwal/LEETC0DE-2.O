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
    bool sumCheck(TreeNode* root, int targetSum, int sum)
    {
        if(!root)
            return false;
        sum+=root->val;
        if(sum==targetSum && (!root->left && !root->right)) //MAking sure it is leaf node
            return true;

        return sumCheck(root->left,targetSum,sum)||sumCheck(root->right,targetSum,sum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        return sumCheck(root,targetSum, sum);
    }
};
