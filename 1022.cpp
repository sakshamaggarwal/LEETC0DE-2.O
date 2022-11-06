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
    int sumOfRoot(TreeNode* root, int ans)
    {
        if(!root)
            return 0;
        ans=ans*2+root->val;
        if(!root->left&&!root->right)
            return ans;
        return sumOfRoot(root->left,ans)+sumOfRoot(root->right,ans);
    }
    int sumRootToLeaf(TreeNode* root) {
        return sumOfRoot(root, 0);
    }
};


// class Solution {
// public:
//     int ans=0; 
//     void sum(TreeNode* root, int temp)
//     {
//         if(!root)
//             return;
//         if(!root->left && !root->right)
//             ans+=temp*2+root->val;
//         if(root->left)
//             sum(root->left,temp*2+root->val);
//         if(root->right)
//             sum(root->right,temp*2+root->val);
//     }
//     int sumRootToLeaf(TreeNode* root) {  
//         sum(root,0);
//         return ans;
//     }
// };
