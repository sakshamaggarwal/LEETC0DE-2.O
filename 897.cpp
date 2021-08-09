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
    void inorder(TreeNode* root)
    {
        if(!root)
            return;
        inorder(root->left);
        abc->right=new TreeNode(root->val);
        abc=abc->right;
        inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        return curr->right;
    }
private:
    TreeNode* abc=new TreeNode();
    TreeNode* curr=abc;
};

// Using Ectra Vector :
// class Solution {
// public:
//     void inorder(TreeNode* root)
//     {
//         if(!root)
//             return;
//         inorder(root->left);
//         ans.push_back(root->val);
//         inorder(root->right);
//     }
//     TreeNode* increasingBST(TreeNode* root) {
        
//         TreeNode* abc=new TreeNode();
//         TreeNode* curr=abc;
//         inorder(root);
//         for(auto i:ans)
//         {
//             abc->right=new TreeNode(i);
//             abc=abc->right;
//         }
//         return curr->right;
//     }
// private:
//     vector<int> ans;
// };
