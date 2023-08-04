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
    void helper(TreeNode* root, bool isLeft, int& sum)
    {
        if(!root)
            return;
        if(isLeft && !root->left && !root->right)
        {
            sum+=root->val;
        }
        helper(root->left,true,sum);
        helper(root->right,false,sum);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        helper(root, false, sum);
        return sum;
    }
};

// Or do by using root->left->left and root->right->right
