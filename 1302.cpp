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
    int ans=0;
    int ht=0;
    void sum(TreeNode* root, int n, int level)
    {
        if(!root)
            return;
        if(level==n)
            ans+=root->val;
        if(level>n)
            return;
        sum(root->left,n,level+1);
        sum(root->right,n,level+1);
    }
    int getHeight(TreeNode* root,int level)
    {
        if(!root)
            return 0;
        ht=max(ht,level);
        getHeight(root->left, level+1);
        getHeight(root->right,level+1);
        return ht;
    }
    int deepestLeavesSum(TreeNode* root) {
        int n=getHeight(root,0);
        sum(root,n,0);
        return ans;
    }
};
