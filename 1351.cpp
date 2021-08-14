class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int n=grid.size(),n2=grid[0].size();
        int i=0,j=n2-1,k=0;
        while(i<n)
        {
            if(j<0||grid[i][j]>=0)
            {
                i++;
                j=n2-1;
            }
            else 
            {
                j--;
                k++;
            }
        }
        return k;
    }
};


// class Solution {
// public:
//     int countNegatives(vector<vector<int>>& grid) {
        
//         int n1=grid.size(),n2=grid[0].size(),k=0;
//         for(int i=n1-1;i>=0;i--)
//         {
//             for(int j=n2-1;j>=0;j--)
//             {
//                 if(grid[i][j]>=0)
//                     break;
//                 else
//                     k++;
//             }
//         }
//         return k;
//     }
// };
