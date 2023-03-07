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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return NULL;
        
        int mid=n/2;
        TreeNode* head=new TreeNode(nums[mid]);
        
        vector<int> l(nums.begin(),nums.begin()+mid);
        vector<int> r(nums.begin()+mid+1,nums.end());

        head->left=sortedArrayToBST(l);
        head->right=sortedArrayToBST(r);

        return head;
    }
};
