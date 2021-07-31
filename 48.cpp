// Transpose and Reflect :
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n=matrix.size(),j;
        for(int i=0;i<n;i++)
        {
            for(j=n-1;j>i;j--)
                swap(matrix[i][j],matrix[j][i]);
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};

// Rotate Group of 4 Cells : 

// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
        
//         int n=matrix.size(),j,k;
//         for(int i=0;i<(n+1)/2;i++)
//         {
//             for(j=0;j<n/2;j++)
//             {
//                 k=matrix[n-1-j][i];
//                 matrix[n-1-j][i]=matrix[n-1-i][n-1-j];
//                 matrix[n-1-i][n-1-j]=matrix[j][n-i-1];
//                 matrix[j][n-i-1]=matrix[i][j];
//                 matrix[i][j]=k;
//             }
//         }
//     }
// };
