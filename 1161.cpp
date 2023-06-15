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
    void maxSum(TreeNode* root, vector<int>& sum, int level)
    {
        if(!root)
            return;
        sum[level]+=root->val;
        maxSum(root->left,sum,level+1);
        maxSum(root->right,sum,level+1);
    }
    int getLen(TreeNode* root)
    {
        if(!root)
            return 0;
        return max(1+getLen(root->left),getLen(root->right)+1);
    }
    int maxLevelSum(TreeNode* root) {
        if(!root)
            return 0;
        int len=getLen(root);
        vector<int> sum(len,0);
        maxSum(root,sum,0);

        int ans=0;
        for(int i=1;i<len;++i)
        {
            if(sum[ans]<sum[i])
                ans=i;
        }
        return ans+1;
    }
};
