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
 // O(n) O(n)
class Solution {
public:
    TreeNode* first, *prev, * second;
    void inorder(TreeNode* root)
    {
        if(!root)
            return;
        inorder(root->left);
        if(prev!=NULL && root->val<prev->val)
        {
            if(!first)
            {
                first=prev;
                second=root;
            }
            else
                second=root;
        }
        prev=root;
        inorder(root->right);
    }
    void recoverTree(TreeNode* root) {
        if(!root)
            return;
        first=second=prev=NULL;
        inorder(root);
        swap(first->val,second->val);
    }
};


// // O(nlogn) O(n+n)
// class Solution {
// public:
//     vector<int> nums;
//     int i=0;
//     void inorder(TreeNode* root)
//     {
//         if(!root)
//             return;
//         inorder(root->left);
//         nums.push_back(root->val);
//         inorder(root->right);
//     }
//     void sortNChange(TreeNode* root)
//     {
//         if(!root)
//             return;
//         sortNChange(root->left);
//         if(root->val!=nums[i])
//             swap(root->val,nums[i]);
//         ++i;
//         sortNChange(root->right);
//     }
//     void recoverTree(TreeNode* root) {
//         if(!root)
//             return;
//         inorder(root);
//         sort(nums.begin(),nums.end());
//         sortNChange(root);
//     }
// };
