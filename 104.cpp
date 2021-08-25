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
    int maxDepth(TreeNode* root) {
        if(!root)
            return 0;
        return max(1+maxDepth(root->left),1+maxDepth(root->right));
    }
};

// class Solution {
// public:
//      void calculate(TreeNode* root,int k)
//      {
//          if(!root)
//              return;
//          ans=max(k,ans);
//          if(root->left)
//             calculate(root->left,k+1);
//          if(root->right)
//             calculate(root->right,k+1);
//      }
//     int maxDepth(TreeNode* root) {
//         if(!root)
//             return 0;
//         calculate(root,k);
//         return ans;
//     }
// private:
//     int k=1,ans=INT_MIN;
// };
