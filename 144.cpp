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
    vector<int> preorderTraversal(TreeNode* root) {
        
        if(!root)
            return {};
        ans.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        return ans;
    }
private:
    vector<int> ans;
};

// Calling another function :
// class Solution {
// public:
//     void preorder(TreeNode* root)
//     {
//         if(!root)
//             return ;
//         ans.push_back(root->val);
//         preorder(root->left);
//         preorder(root->right);
//     }
//     vector<int> preorderTraversal(TreeNode* root) {
//         preorder(root);
//         return ans;
//     }
// private:
//     vector<int> ans;
// };

// Using Stack :
// class Solution {
// public:
//     vector<int> preorderTraversal(TreeNode* root) {
        
//         if(!root)
//             return {};
//         s.push(root);
//         while(!s.empty())
//         {
//             root=s.top();
//             s.pop();
//             ans.push_back(root->val);
//             if(root->right!=NULL)
//                 s.push(root->right);
//             if(root->left!=NULL)
//                 s.push(root->left);
//         }
//         return ans;
//     }
// private:
//     vector<int> ans;
//     stack<TreeNode*> s;
// };
