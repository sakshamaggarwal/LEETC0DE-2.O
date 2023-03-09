class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int j=m-1;
        int i=0;
        while(i<n&&j>=0)
        {
            if(matrix[i][j]==target)
                return true;
            else if(matrix[i][j]>target)
                --j;
            else
                ++i;
        }
        return false;
    }
};



// // Linear : O(n) :

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int n=matrix.size();
//         int m=matrix[0].size();

//         int i=0;

//         for(i=0;i<n;++i)
//             if(matrix[i][0]>target)
//                 break;
//         if(i==0)
//             return false;
        
//         int j=0;
//         // Binary search :
//         while(j<m)
//         {
//             int mid=j+(m-j)/2;
//             if(matrix[i-1][mid]==target)
//                 return true;
//             else if(matrix[i-1][mid]<target)
//                 j=mid+1;
//             else
//                 m=mid;
//         }

//         // for(int j=0;j<m;++j)
//         //     if(matrix[i-1][j]==target)
//         //         return true;

//         return false;
//     }
// };
