class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int m=n;
        vector<vector<int>> matrix(n,vector<int>(m,0));

        int num=1;
        int i=0,j=0,k=0;

        while(i<n&&j<m)
        {
            for(k=j;k<m;++k)
            {
                matrix[i][k]=num++;
            }
            ++i;
            for(k=i;k<n;++k)
            {
                matrix[k][m-1]=num++;
            }
            --m;
            for(k=m-1;k>=j;--k)
            {
                matrix[n-1][k]=num++;
            }
            --n;
            for(k=n-1;k>=i;--k)
            {
                matrix[k][j]=num++;
            }
            ++j;
        }
        return matrix;
    }
};
