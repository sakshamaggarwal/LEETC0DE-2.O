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
    vector<int> postorderTraversal(TreeNode* root) {
        
        if(!root)
            return {};
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        ans.push_back(root->val);
        return ans;
    }
private:
    vector<int> ans;
};

// USing 1 stack and reverse : rev(root-right-left) :
// class Solution {
// public:
//     vector<int> postorderTraversal(TreeNode* root) {
        
//         if(!root)
//             return {};
//         s.push(root);
//         while(!s.empty())
//         {
//             root=s.top();
//             s.pop();
//             ans.push_back(root->val);
//             if(root->left)
//                 s.push(root->left);
//             if(root->right)
//                 s.push(root->right);
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// private:
//     vector<int> ans;
//     stack<TreeNode*> s;
// };
