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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        
        if(!root1)
            return root2;
        if(!root2)
            return root1;
        root1->val+=root2->val;
        root1->left=mergeTrees(root1->left,root2->left);
        root1->right=mergeTrees(root1->right,root2->right);
        return root1;
    }
};

// class Solution {
// public:
//     void merge(TreeNode* &abc,TreeNode* root1, TreeNode* root2)
//     {
//         if(!root1&&!root2)
//             abc=NULL;
//         else if(!root2)
//         {
//             abc=new TreeNode(root1->val);
//             merge(abc->left,root1->left,root2);
//             merge(abc->right,root1->right,root2);
            
//         }
//         else if(!root1)
//         {
//             abc=new TreeNode(root2->val);
//             merge(abc->left,root1,root2->left);
//             merge(abc->right,root1,root2->right);
//         }
//         else
//         {
//             abc=new TreeNode(root1->val+root2->val);
//             merge(abc->left,root1->left,root2->left);
//             merge(abc->right,root1->right,root2->right);
//         }
        
//     }
//     TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        
//         merge(abc,root1,root2);
//         return abc;
//     }
// private:
//     TreeNode* abc;
// };


// All test Cases Doesn't Run 146/180..
// class Solution {
// public:
//     void merge(TreeNode* &root1, TreeNode* root2)
//     {
//         if(!root1&&!root2)
//             root1=NULL;
//         else if(!root2)
//         {
//             merge(root1->left,root2);
//             merge(root1->right,root2);
            
//         }
//         else if(!root1)
//         {
//             root1=new TreeNode(root2->val);
//             merge(root1,root2->left);
//             merge(root1,root2->right);
//         }
//         else
//         {
//             root1->val+=root2->val;
//             merge(root1->left,root2->left);
//             merge(root1->right,root2->right);
//         }
        
//     }
//     TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        
//         merge(root1,root2);
//         return root1;
//     }
// };
