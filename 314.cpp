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
    vector<vector<int>> ans;
    map<int,vector<pair<int,int>>> m;

    void helper(TreeNode* root, int col, int level)
    {
        if(!root)
            return;
        m[col].push_back(make_pair(root->val,level));
        if(!root->left && !root->right)
            return;
        helper(root->left,col-1,level+1);
        helper(root->right,col+1,level+1);
    }

    vector<vector<int>> verticalOrder(TreeNode* root) {
        if(!root)
            ans;
        
        helper(root,0,0);
        
        for(auto it : m)
        {
            vector<pair<int,int>> temp = it.second;

            sort(temp.begin(),temp.end(),[](pair<int,int> a, pair<int,int> b){
                return a.second<b.second;
            }
            );
            
            vector<int> v;
            for(auto it : temp)
                v.push_back(it.first);
            
            ans.push_back(v);
        }

        return ans;
    }
};
