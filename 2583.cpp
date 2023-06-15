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
    void maxSum(TreeNode* root, vector<long long>& sum, long long level)
    {
        if(!root)
            return;
        sum[level]+=root->val;
        maxSum(root->left,sum,level+1);
        maxSum(root->right,sum,level+1);
    }
    long long getDepth(TreeNode* root)
    {
        if(!root)
            return 0;
        return (max(1+getDepth(root->left),1+getDepth(root->right)));
    }
    long long kthLargestLevelSum(TreeNode* root, int k) {
        if(!root)
            return 0;
        long long len=getDepth(root);
        if(k>len)
            return -1;
        vector<long long> sum(len,0);
        maxSum(root, sum, 0);

        sort(sum.begin(),sum.end());    
        //greater<int>()); return sum[k-1]-giving error in large test cases

        return sum[len-k];
        // vector<int> temp=sum;
        // sort(temp.begin(),temp.end());
        // for(int i=0;i<len;++i)
        // {
        //     if(sum[i]==temp[k-1])
        //         return i+1;
        // }
    }
};

// // Using queue : 
// class Solution {
// public:
//     long long kthLargestLevelSum(TreeNode* root, int k) {
//         if(!root)
//             return 0;
//         queue<TreeNode*> level;
//         level.push(root);
//         TreeNode* p;
//         vector<long long> vec;

//         while(!level.empty())
//         {
//             int n=level.size();
//             long long sum=0;

//             while(n--)
//             {
//                 p=level.front();
//                 sum+=p->val;
//                 level.pop();

//                 if(p->left)
//                     level.push(p->left);
//                 if(p->right)
//                     level.push(p->right);
//             }
//             vec.push_back(sum);
//         }
//         if(vec.size()<k)
//             return -1;
//         sort(vec.begin(),vec.end());
//         return vec[vec.size()-k];
//     }
// };
