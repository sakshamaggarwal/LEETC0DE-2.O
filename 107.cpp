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
    int getDepth(TreeNode* root)
    {
        if(!root)
            return 0;
        return max(getDepth(root->left),getDepth(root->right))+1;
    }
    void helper(TreeNode* root, int level,vector<vector<int>>& ans)
    {
        if(!root)
            return;
        ans[level].push_back(root->val);
        helper(root->left,level-1,ans);
        helper(root->right,level-1,ans);
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        int depth=getDepth(root);
        vector<vector<int>> ans(depth,vector<int> {});
        helper(root,depth-1,ans);
        return ans;
    }
};



// With Reverse :

//class Solution {
// public:
//     vector<vector<int>> ans;
//     void helper(TreeNode* root,int level)
//     {
//         if(!root)
//             return;
//         if(level==ans.size())
//             ans.push_back({});
//         helper(root->left,level+1);
//         helper(root->right,level+1);
//         ans[level].push_back(root->val);
//     }
//     vector<vector<int>> levelOrderBottom(TreeNode* root) {
//         helper(root, 0);
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// }; 
