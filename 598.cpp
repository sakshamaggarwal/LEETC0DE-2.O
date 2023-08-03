class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int s=ops.size();
        for(int i=0;i<s;++i)
        {
            m=min(ops[i][0],m);
            n=min(ops[i][1],n);
        }
        return n*m;
    }
};



// TLE :
// class Solution {
// public:
//     int maxCount(int m, int n, vector<vector<int>>& ops) {
//         int nums=ops.size();

//         vector<vector<int>> matrix(n,vector<int>(m,0));

//         for(int k=0;k<nums;++k)
//         {
//             for(int i=0;i<ops[k][0];++i)
//             {
//                 for(int j=0;j<ops[k][1];++j)
//                 {
//                     matrix[i][j]+=1;
//                 }
//             }
//         }
        
//         int maxi=0;
//         int ans=0;

//         for(int i=0;i<n;++i)
//         {
//             for(int j=0;j<m;++j)
//             {
//                 if(matrix[i][j]>maxi)
//                 {
//                     maxi=matrix[i][j];
//                     ans=1;
//                 }
//                 else if(matrix[i][j]==maxi)
//                     ++ans;
//             }
//         }
//         return ans;
//     }
// };
