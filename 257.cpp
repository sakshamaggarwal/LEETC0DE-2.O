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
    void makeVector(vector<string>& ans, TreeNode* root, string s)
    {
        if(!root)
            return;
        s+=to_string(root->val);
        if(!root->left && !root->right)
            ans.push_back(s);
        makeVector(ans,root->left,s+"->");
        makeVector(ans,root->right,s+"->");
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string s="";
        makeVector(ans,root,s);
        return ans;
    }
};
