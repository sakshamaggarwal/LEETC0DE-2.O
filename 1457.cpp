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
    map<int,int> m;
    int ans=0;
    void helper(TreeNode* root)
    {
        if(!root)
            return;
        ++m[root->val];
        
        if(!root->left && !root->right)
        {
            int k=0;
            for(auto it: m)
                if(it.second%2!=0)
                    ++k;
                
            if(k<=1)
                ++ans;
        }
        
        helper(root->left);
        helper(root->right);
        --m[root->val];
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        helper(root);
        return ans;
    }
};

// class Solution {
// public:
//     int ans=0;
//     void helper(TreeNode* root, vector<int> m)
//     {
//         if(!root)
//             return;
//         m[root->val]++;
        
//         if(!root->left&&!root->right)
//         {
//             int k=0;
//             for(int i=1;i<=9;++i)
//             {
//                 if(m[i]%2!=0)
//                     k++;
//             }
//             if(k<=1)
//                 ans++;
//             return;
//         }

//         helper(root->left,m);
//         helper(root->right,m);
//         m[root->val]--;
//     }
//     int pseudoPalindromicPaths (TreeNode* root) {
//         vector<int> m(10,0);
//         helper(root,m);
//         return ans;
//     }
// }; 
