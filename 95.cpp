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
    vector<TreeNode*> allBST(int start,int end)
    {
        vector<TreeNode*> temp;
        if(start>end)
        {
            temp.push_back(nullptr);
            return temp;
        }
        if(start==end)
        {
            TreeNode* root=new TreeNode(start);
            temp.push_back(root);
            return temp;
        }
        
        for(int i=start;i<=end;++i)
        {
            vector<TreeNode*> leftTree=allBST(start,i-1);
            vector<TreeNode*> rightTree=allBST(i+1,end);

            for(auto l : leftTree)
            {
                for(auto r : rightTree)
                {
                    TreeNode* root=new TreeNode(i,l,r);
                    temp.push_back(root);
                }
            }
        }
        return temp;
    }

    vector<TreeNode*> generateTrees(int n) {
        return allBST(1,n);
    }
};

 


// // With Memoisation :
// class Solution {
// public:
//     vector<TreeNode*> allBST(int start, int end, map<pair<int,int>,vector<TreeNode*>>& memo)
//     {
//         vector<TreeNode*> temp;
//         if(start>end)
//         {
//             temp.push_back(nullptr);
//             return temp;
//         }
//         if(memo.find(make_pair(start,end))!=memo.end())
//         {
//             memo[make_pair(start,end)];
//         }

//         for(int i=start;i<=end;++i)
//         {
//             vector<TreeNode*> leftTree=allBST(start,i-1,memo);
//             vector<TreeNode*> rightTree=allBST(i+1,end,memo);

//             for(auto l : leftTree)
//             {
//                 for(auto r : rightTree)
//                 {
//                     TreeNode* root=new TreeNode(i,l,r);
//                     //root->left=l;
//                     //root->right=r;
//                     temp.push_back(root);
//                 }
//             }
//         }
//         return memo[make_pair(start,end)]=temp;
//     }
//     vector<TreeNode*> generateTrees(int n) {
//         map<pair<int,int>,vector<TreeNode*>> memo;
//         return allBST(1,n,memo);
//     }
// };
