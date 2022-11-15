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
    int countNodes(TreeNode* root) {
        if(!root)
            return ans;
        ans++;
        countNodes(root->right);
        countNodes(root->left);
        return ans;
    }
};

// class Solution {
// public:
//     int countNodes(TreeNode* root) {
//         if(!root)
//             return 0;
//         return countNodes(root->left)+countNodes(root->right)+1;
//     }
// };
