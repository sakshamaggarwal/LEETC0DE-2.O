/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// Recursive, calling helper optional
class Solution {
public:
    TreeNode* helper(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if(!root)
            return root;
        if(root->val < q->val && root->val < p->val)
            return helper(root->right,p,q);
        else if(root->val > q->val && root->val > p->val)
            return helper(root->left,p,q);
        return root;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return helper(root,p,q);
    }
};

// Iterative (while loop) :
// class Solution {
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         while(root)          // while(true)
//         {
//             if(root->val<q->val&&root->val<p->val)
//                 root=root->right;
//             else if(root->val>q->val&&root->val>p->val)
//                 root=root->left;
//             else
//                 break;
//         }
//         return root;
//     }
// };
