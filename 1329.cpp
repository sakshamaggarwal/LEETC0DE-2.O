class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;++i)    // For Rows
        {
            vector<int> temp;
            int a=i;
            int b=0;
            while(a<n&&b<m) // Till Exists
            {
                temp.push_back(mat[a][b]);
                a++;
                b++;
            }
            sort(temp.begin(),temp.end());
            a=i;
            b=0;
            int k=0;
            while(a<n&&b<m) // Updating in MAt
            {
                mat[a][b]=temp[k];
                a++;
                b++;
                k++;
            }
        }
        
        for(int i=1;i<m;++i)    // For Columns
        {
            vector<int> temp;
            int a=0;
            int b=i;
            while(a<n&&b<m)     // Till Exists
            {
                temp.push_back(mat[a][b]);
                a++;
                b++;
            }
            sort(temp.begin(),temp.end());
            a=0;
            b=i;
            int k=0;
            while(a<n&&b<m)     // Updating in MAt
            {
                mat[a][b]=temp[k];
                a++;
                b++;
                k++;
            }
        }
        return mat;
    }
};
