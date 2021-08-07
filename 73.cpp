class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int n1=matrix.size(),n2=matrix[0].size();
        vector<int> row,col;
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                if(matrix[i][j]==0)
                {
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        for(int i:row)
        {
            for(int j=0;j<n2;j++)
                matrix[i][j]=0;
        }
        for(int j:col)
        {
            for(int i=0;i<n1;i++)
                matrix[i][j]=0;
        }
    }
};

// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
        
//         int n1=matrix.size();
//         int n2=matrix[0].size();
//         vector<bool> one(n1,false);
//         vector<bool> two(n2,false);
        
//         for(int i=0;i<n1;i++)
//         {
//             for(int j=0;j<n2;j++)
//             {
//                 if(matrix[i][j]==0)
//                 {
//                     one[i]=true;
//                     two[j]=true;
//                 }
//             }
//         }
//         for(int i=0;i<n1;i++)
//         {
//             for(int j=0;j<n2;j++)
//             {
//                 if(one[i]||two[j])
//                     matrix[i][j]=0;
//             }
//         }
//     }
// };

// // OLD Solution but good
// //  Take first row and col and set 0 at those positions...
// //  Take another matrix and check in it and update in this...

// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
        
//         int n1=matrix.size(),n2=matrix[0].size(),one=0,two=0;
        
//         for(int i=0;i<n1;i++)
//             if(matrix[i][0]==0)
//                 one=1;
//         for(int j=0;j<n2;j++)
//             if(matrix[0][j]==0)
//                 two=1;
        
//         for(int i=1;i<n1;i++)
//         {
//             for(int j=1;j<n2;j++)
//             {
//                 if(matrix[i][j]==0)
//                 {
//                     matrix[0][j]=0;
//                     matrix[i][0]=0;
//                 }
//             }
//         }
//         for(int i=1;i<n1;i++)
//         {
//             for(int j=1;j<n2;j++)
//             {
//                 if(matrix[i][0]==0||matrix[0][j]==0)
//                     matrix[i][j]=0;
//             }
//         }
        
//         if(one==1)
//             for(int i=0;i<n1;i++)
//                 matrix[i][0]=0;
//         if(two==1)
//             for(int j=0;j<n2;j++)
//                 matrix[0][j]=0;
//     }
// };

// Self Using PAir in MAPS :
// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
        
//         int n=matrix.size(),n2=matrix[0].size(),p,j;
//         map<pair<int,int>,int> m;
//         for(int i=0;i<n;i++)
//         {
//             for(j=0;j<n2;j++)
//             {
//                 if(matrix[i][j]==0&&m[{i,j}]==0)
//                 {
//                     p=0;
//                     while(p<n)
//                     {
//                         if(matrix[p][j]!=0)
//                            m[{p,j}]=1;
//                         p++;
//                     }
//                     p=0;
//                     while(p<n2)
//                     {
//                         if(matrix[i][p]!=0)
//                             m[{i,p}]=1;
//                         p++;
//                     }
//                 }
//             }
//         }
//         for(int i=0;i<n;i++)
//         {
//             for(j=0;j<n2;j++)
//             {
//                 if(m[{i,j}])
//                     matrix[i][j]=0;
//             }
//         }
//     }
// };
