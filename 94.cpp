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
        ans.push_back(root->val);
        inorder(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        
        inorder(root);
        return ans;
    }
private:
    vector<int> ans;
};


// // Using Stack :
// class Solution {
// public:
    
//     vector<int> inorderTraversal(TreeNode* root) {
      
//         if(!root)
//             return {};
//         while(true)
//         {
//             if(root)
//             {
//                 s.push(root);
//                 root=root->left;
//             }
//             else
//             {
//                 if(s.empty())
//                     break;
//                 root=s.top();
//                 s.pop();
//                 ans.push_back(root->val);
//                 root=root->right;
//             }
//         }
//         return ans;
//     }
// private:
//     stack<TreeNode*> s;
//     vector<int> ans;
// };


// Same Function Recursion :
// class Solution {
// public:
//     vector<int> inorderTraversal(TreeNode* root) {
        
//         if(!root)
//             return {};
//         inorderTraversal(root->left);
//         ans.push_back(root->val);
//         inorderTraversal(root->right);
//         return ans;
//     }
// private:
//     vector<int> ans;
// };
