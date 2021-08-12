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
    void check(TreeNode* root)
    {
        if(!root)
            return;
        check(root->left);
        if(ans>=0)
            k=min(k,root->val-ans);
        ans=root->val;
        check(root->right);
    }
    int minDiffInBST(TreeNode* root) {
        
        check(root);
        return k;
    }
private:
    int ans=-1,k=INT_MAX;
};

// Put in Vector and sort :
// class Solution {
// public:
//     void put(TreeNode* root)
//     {
//         if(!root)
//             return;
//         put(root->left);
//         ans.push_back(root->val);
//         put(root->right);
//     }
//     int minDiffInBST(TreeNode* root) {
        
//         put(root);
//         sort(ans.begin(),ans.end());
//         int n=ans.size();
//         for(int i=1;i<n;i++)
//             k=min(ans[i]-ans[i-1],k);
//         return k;
//     }
// private:
//     vector<int> ans;
//     int k=INT_MAX;
// };
